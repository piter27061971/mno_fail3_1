#include <iostream>
#include "Priamoug.h"
Priamoug::Priamoug(double a, double b) : Paralerogram(90, 90, a, b)
{
};
void Priamoug::vivod()
{
    std::cout << "Прямоугольник" << std::endl;
    this->vivod_ost();
};