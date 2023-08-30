#include <iostream>
#include "Priam_treug.h"

Priam_treug::Priam_treug(double A, double B, double a, double b, double c) : Treug(A, B, 90, a, b, c)
{
};

void  Priam_treug::vivod()
{
    std::cout << "Прямоугольный треугольник" << std::endl;
    this->vivod_ost();
};