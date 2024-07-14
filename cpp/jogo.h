#ifndef JOGO_H
#define JOGO_H

#include "tabuleiro.h"
#include "barco.h"
#include "minhaMatriz.h"
#include <zmq.hpp>

class jogo
{
private:
    tabuleiro    *tp1;
    tabuleiro    *tp2;
    unsigned int round;
    unsigned int vida;
    zmq::context_t * ctxtSend;
    zmq::context_t * ctxtRecv;
public:
    jogo();
    ~jogo();
    void inicializaTabuleiros();
    void imprimeTabuleiros();
    void rodaJogo();
};

#endif // JOGO_H
