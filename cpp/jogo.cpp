#include <iostream>
#include <string>
#include <zmq.hpp>
#include "jogo.h"

void switchBarcos(int val)
{
    switch (val) {
        case 1:
            std::cout << "Corveta. \nDimensão = 2 unidades." << std::endl;
        break;
        case 2:
            std::cout << "Submarino. \nDimensão = 3 unidades." << std::endl;
        break;
        case 3:
            std::cout << "Fragata. \nDimensão = 3 unidades." << std::endl;
        break;
        case 4:
            std::cout << "Destroyer. \nDimensão = 4 unidades." << std::endl;
        break;
        case 5:
            std::cout << "Cruzador. \nDimensão = 5 unidades." << std::endl;
        break;
        case 6:
            std::cout << "Porta-Aviões. \nDimensão = 6 unidades." << std::endl;

    }
}

jogo::jogo()
{
    tp1 = new tabuleiro;
    tp2 = new tabuleiro;
    round = 1;
    vida = 23;
    ctxtSend = new zmq::context_t(1);
    ctxtRecv = new zmq::context_t(1);
}

jogo::~jogo()
{
    ctxtSend->close();
    ctxtSend->close();
    delete ctxtSend;
    delete ctxtRecv;
    delete tp1;
    delete tp2;
}

void jogo::inicializaTabuleiros()
{
    std::cout << "Inicializando o tabuleiro do jogador 1" << std::endl;
    int contador = 0;
    int posX = 0, posY = 0, dir = 0;
    while(contador < 6)
    {
        std::system("clear");
        tp1->imprimeTabuleiro();

        std::cout << "Passe as coordenas (x,y) para o posicionamento da ";
        switchBarcos(contador+1);
        std::cout << "0 = vertical e 1 = horizontal" << std::endl;
        std::cin >> posX >> posY >> dir;
        if(tp1->posicionaBarco(posX,posY,dir,contador))
        {
            contador++;
        }
        else
        {
            std::cout << "Não foi possível colocar o barco na posição desejada." << std::endl;
        }
    }

    std::cout << "Inicializando o tabuleiro do jogador 2" << std::endl;
    contador = 0;
    while(contador < 6)
    {
        std::system("clear");
        tp2->imprimeTabuleiro();
        std::cout << "Passe as coordenas (x,y) para o posicionamento da ";
        switchBarcos(contador+1);
        std::cout << "0 = vertical e 1 = horizontal" << std::endl;
        std::cin >> posX >> posY >> dir;
        if(tp2->posicionaBarco(posX,posY,dir,contador))
        {
            contador++;
        }
        else
        {
            std::cout << "Não foi possível colocar o barco na posição desejada." << std::endl;
        }
    }
}

void jogo::imprimeTabuleiros()
{
    std::cout << "Tabuleiro do jogador 1: " << std::endl;
    tp1->imprimeTabuleiro();

    std::cout << std::endl;

    std::cout << "Tabuleiro do jogador 2: " << std::endl;
    tp2->imprimeTabuleiro();
}

void jogo::rodaJogo()
{
    tabuleiro auxP1;
    tabuleiro auxP2;
    int a = 0,b = 0;
    zmq::socket_t *sendSocket = new zmq::socket_t(*ctxtSend, ZMQ_PUB);
    zmq::socket_t *recvSocket = new zmq::socket_t(*ctxtRecv, ZMQ_SUB);
    std::string endpoint_pub = "tcp://127.0.0.1:5555";
    std::string endpoint_sub = "tcp://127.0.0.1:1234";
    try
    {
        std::cout << "Trying to connect into " << endpoint_pub << " pub endpoint" << std::endl;
        sendSocket->bind(endpoint_pub.c_str());
        if(sendSocket->connected()){
            std::cout << "Connected to " << endpoint_pub << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "[" << endpoint_pub << "]" << e.what() << '\n';
        return;
    }

    try
    {
        std::cout << "Trying to connect into " << endpoint_sub << " sub endpoint" << std::endl;
        recvSocket->setsockopt(ZMQ_SUBSCRIBE, nullptr, 0);
        // recvSocket->setsockopt(ZMQ_RCVTIMEO,1000);
        recvSocket->connect(endpoint_sub.c_str());
        if(recvSocket->connected()){
            std::cout << "Connected to " << endpoint_sub << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << "[" << endpoint_sub << "] " << e.what() << '\n';
        return;
    }
    
    while (vida > 0)
    {
        std::stringstream ss;
        ss << "Player 1 with " << vida << " life points.";

        // I'm not really sure why I need to do the memcpy to make it work
        zmq::message_t request(ss.str().size());
        memcpy((void *)request.data(),ss.str().c_str(),ss.str().size());

        bool status = sendSocket->send(request,0);
        if(status)
        {
            std::cout << "message sent!" << std::endl;
        }
        else
        {
            std::cout << "Message not sent" << std::endl;
        }
        // zmq_sleep(5);
        zmq::message_t reply;
        recvSocket->recv(&reply, 0);
        std::cout << "Received " << reply.size() << " word.\nMessage: " << std::string(static_cast<char*>(reply.data()), reply.size()) << std::endl;
        vida--;
        std::cout << "Vidas = " << vida << std::endl;
    }
    sendSocket->close();
    recvSocket->close();
        
}
