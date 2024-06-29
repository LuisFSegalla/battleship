#ifndef TABULEIRO_H
#define TABULEIRO_H

#include "minhaMatriz.h"
#include "barco.h"

class tabuleiro
{
private:
    barco *vecBarcos;
    minhaMatriz<char> m;
public:
    tabuleiro();
    ~tabuleiro();
    int posicionaBarco(int a, int b, int dir, int boat);
    char retPosicao(int a, int b);
    void insereTabuleiro(int a, int b, char c);
    barco retBarco(int a);
    void imprimeTabuleiro();
};

#endif // TABULEIRO_H
