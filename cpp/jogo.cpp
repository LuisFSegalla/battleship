#include <iostream>
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
    vidaP1 = vidaP2 = 23;
}

jogo::~jogo()
{
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
        // std::cout << "\033[2J\033[1;1H";
    }

    std::cout << "Inicializando o tabuleiro do jogador 2" << std::endl;
    contador = 0;
    while(contador < 6)
    {
        tp2->imprimeTabuleiro();
        std::cout << "Passe as coordenas (x,y) para o posicionamento da ";
        switchBarcos(contador+1);
        std::cout << "0 = vertical e 1 = horizontal" << std::endl;
        std::cin >> posX >> posY >> dir;
        if(tp2->posicionaBarco(posX,posY,dir,contador))
        {
            contador++;
            std::cout << "\033[2J\033[1;1H";
        }
        else
        {
            std::cout << "Não foi possível colocar o barco na posição desejada." << std::endl;
            std::cout << "\033[2J\033[1;1H";
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
    while(vidaP1 > 0 || vidaP2 > 0)
    {
        if(round == 1)
        {
            std::cout << std::endl << std::endl;
            auxP1.imprimeTabuleiro();
            std::cout << "Jogador 1 faça sua jogada: ";
            std::cin >> a >> b;
            std::cout << std::endl;

            if(auxP1.retPosicao(a,b) != 'X' && tp2->retPosicao(a,b) !=  '*')
            {
                auxP1.insereTabuleiro(a,b,'X');
                vidaP2--;
            }
            if(auxP1.retPosicao(a,b) != 'X' && tp2->retPosicao(a,b) ==  '*')
            {
                auxP1.insereTabuleiro(a,b,'0');
            }
            std::cout << "Tabuleiro do jogador 1 depois da jogada: " << std::endl;
            auxP1.imprimeTabuleiro();
            std::cout << std::endl << std::endl;
            round = 2;
        }
        if(round == 2)
        {
            std::cout << std::endl << std::endl;
            auxP2.imprimeTabuleiro();
            std::cout << "Jogador 2 faça sua jogada: ";
            std::cin >> a >> b;
            std::cout << std::endl;
            if(auxP2.retPosicao(a,b) != 'X' && tp1->retPosicao(a,b) != '*')
            {
                auxP2.insereTabuleiro(a,b,'X');
                vidaP1--;
            }
            if(auxP2.retPosicao(a,b) != 'X' && tp1->retPosicao(a,b) == '*')
            {
                auxP2.insereTabuleiro(a,b,'0');
            }
            std::cout << "Tabuleiro do jogador 2 depois da jogada: " << std::endl;
            auxP2.imprimeTabuleiro();
            std::cout << std::endl << std::endl;
            round = 1;
        }
    }
    if(vidaP1 > vidaP2){
        std::cout << "Jogador 1 venceu!" << std::endl;
    }
    else{
        std::cout << "Jogador 2 venceu!" << std::endl;
    }
}
