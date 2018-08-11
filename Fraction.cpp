//
// Created by louis on 10/08/18.
//

#include <iostream>
#include "Fraction.h"

using namespace std;

Fraction::Fraction(int nbr1, int nbr2) : num(nbr1), den(nbr2) {}
Fraction::Fraction(int nbr) : num(nbr), den(1) {}
Fraction::Fraction() : num(0), den(0) {}

Fraction Fraction::add(Fraction other) {
    int newNum = getNum() * other.getDen() + other.getNum() * getDen();
    int newDen = getDen() * other.getDen();
    return {newNum, newDen};
}

string Fraction::toString() {
    return to_string(num) + "/" + to_string(den);
}