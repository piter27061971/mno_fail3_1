#include <iostream>
#include "Kvadrat.h"
Kvadrat::Kvadrat(double a) : Priamoug(a, a)
{};
void Kvadrat::vivod()
{
    std::cout << "�������" << std::endl;
    this->vivod_ost();
};