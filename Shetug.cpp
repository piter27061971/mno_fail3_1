#include <iostream>
#include "Shetug.h"
Shetug::Shetug(double A, double B, double C, double D, double a, double b, double c, double d)
{
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;


};
void Shetug::vivod_1str()
{
    std::cout << "Четыреxугольник" << std::endl;
};
void Shetug::vivod_ost()
{
    std::cout << "Стороны: " << "a=" << a << "; " << "b=" << b << "; " << "c=" << c << "; " << "d=" << d << ": " << std::endl;
    std::cout << "Углы: " << "A=" << A << "; " << "B=" << B << "; " << "C=" << C << "; " << "D=" << D << ": " << std::endl;
    std::cout << std::endl;
};

void Shetug::vivod()
{
    this->vivod_1str();
    this->vivod_ost();
};