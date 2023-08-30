#include <iostream>
#include "Romb.h"
Romb::Romb(double A, double B, double a) : Paralerogram(A, B, a, a)
{};

void  Romb::vivod()
{
    std::cout << "Ромб" << std::endl;
    this->vivod_ost();
};
