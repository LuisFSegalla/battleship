#ifndef JOGO_H
#define JOGO_H

#include "tabuleiro.h"
#include "barco.h"
#include "minhaMatriz.h"

class jogo
{
private:
    tabuleiro    *tp1;
    tabuleiro    *tp2;
    unsigned int round;
    unsigned int vidaP1;
    unsigned int vidaP2;
public:
    jogo();
    ~jogo();
    void inicializaTabuleiros();
    void imprimeTabuleiros();
    void rodaJogo();
};

#endif // JOGO_H
