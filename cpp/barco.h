#ifndef BARCO_H
#define BARCO_H


class barco
{
private:
    char nome;
    int hp;//vida
public:
    barco();
    barco(char n, int h){nome = n; hp = h;};
    void cria(char n, int h){nome = n; hp = h;};
    void hit(){hp--;}
    int returnHP(){return hp;}
    char returnName(){return nome;}
};

#endif // BARCO_H
