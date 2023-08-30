#include <iostream>
#include "Treug.h"
Treug::Treug(double A, double B, double C, double a, double b, double c)
{
    this->A = A;
    this->B = B;
    this->C = C;
    this->a = a;
    this->b = b;
    this->c = c;

};

void Treug::vivod_1str()
{
    std::cout << "Треугольник" << std::endl;
};
void Treug::vivod_ost()
{
    std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << std::endl;
    std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << std::endl;
    std::cout << std::endl;
};

void Treug::vivod()
{
    this->vivod_1str();
    this->vivod_ost();

};

