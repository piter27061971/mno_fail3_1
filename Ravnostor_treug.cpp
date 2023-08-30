#include <iostream>
#include "Ravnostor_treug.h"
Ravnostor_treug::Ravnostor_treug(double a) :Ravnbedr_treug(60, 60, a, a)
    {

    };

    void Ravnostor_treug::vivod()
    {
        std::cout << "Равносторонний треугольник" << std::endl;
        this->vivod_ost();
    };