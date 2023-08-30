#include <iostream>
#include "Ravnbedr_treug.h"
Ravnbedr_treug::Ravnbedr_treug(double A, double B, double a, double b) : Treug(A, B, A, a, b, a)
{
};

void Ravnbedr_treug::vivod()
{
    std::cout << "Равнобедренный треугольник" << std::endl;
    this->vivod_ost();
};