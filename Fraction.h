//
// Created by louis on 10/08/18.
//

#ifndef CLABY_FRACTION_H
#define CLABY_FRACTION_H


#include <string>

class Fraction {
    public:
    Fraction(int nbr1, int nbr2);
    Fraction(int nbr);
    Fraction();
    Fraction add(Fraction other);
    std::string toString();
    bool superior(Fraction other);
    bool inferior(Fraction other);
    bool equals(Fraction other);
    int getNum();
    int getDen();

    private:
    int num, den;
};


#endif //CLABY_FRACTION_H
