#include <iostream>
#include "tabuleiro.h"

tabuleiro::tabuleiro()
{
    m.resize(14,14, '*');
    vecBarcos = new barco[6];
    vecBarcos[0].cria('c',2);
    vecBarcos[1].cria('s',3);
    vecBarcos[2].cria('f',3);
    vecBarcos[3].cria('d',4);
    vecBarcos[4].cria('C',5);
    vecBarcos[5].cria('p',6);
}

tabuleiro::~tabuleiro()
{
    delete [] vecBarcos;
}

int tabuleiro::posicionaBarco(int a, int b, int dir, int boat)
{
    char n;
    int  h;
    if(boat < 6)
    {
        barco b = vecBarcos[boat];
        n = b.returnName();
        h = b.returnHP();
    }
    else
    {
        std::cout << "Entrada de barco inválida." << std::endl;
        return 0;
    }

    if(dir == 1)//coloca na horizontal
    {
        if(b+h >= 14)
        {
            std::cout << "Não é possível colocar o barco nesta posição." << std::endl;
            return 0;
        }
        else
        {
            int contador = 0;
            for(int j = 0; j < h; j++)
            {
                if(m.retornaElemento(a,b+j) == '*')
                {
                    contador++;
                }
            }
            if(contador == h)
            {
                for(int j = 0; j < h; j++)
                {
                    m.insereElemento(n,a,b+j);
                }
                return 1;
            }
            else
            {
                std::cout << "Não é possível colocar o barco nesta posição." << std::endl;
                return 0;
            }
        }
    }
    else if(dir == 0)//coloca na vertical
    {
        if(a+h >= 14)
        {
            std::cout << "Não é possível colocar o barco nesta posição." << std::endl;
            return 0;
        }
        else
        {
            int contador = 0;
            for(int i = 0; i < h; i++)
            {
                if(m.retornaElemento(a+i,b) == '*')
                {
                    contador++;
                }
            }
            if(contador == h)
            {
                for(int i = 0; i < h; i++)
                {
                    m.insereElemento(n,a+i,b);
                }
                return 1;
            }
            else
            {
                std::cout << "Não é possível colocar o barco nesta posição." << std::endl;
                return 0;
            }

        }
    }
    else
    {
        return 0;
    }
}

char tabuleiro::retPosicao(int a, int b)
{
    if(a < 14 && b < 14)
    {
        return m.retornaElemento(a,b);
    }
    else
    {
        std::cout << "Entrada inválida." << std::endl;
        return '*';
    }
}

void tabuleiro::insereTabuleiro(int a, int b, char c)
{
    if(a < 14 && b < 14)
    {
        m.insereElemento(c,a,b);
    }
}

barco tabuleiro::retBarco(int a)
{
    if(a < 6)
    {
        return vecBarcos[a];
    }
    else
    {
        return vecBarcos[0];
    }
}

void tabuleiro::imprimeTabuleiro()
{
    m.imprime();
}
