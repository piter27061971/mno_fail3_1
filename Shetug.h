#pragma once
#include "Figure.h"
class Shetug : public Figure
{
public:
    Shetug(double A, double B, double C, double D, double a, double b, double c, double d);

    void vivod_1str();
    void vivod_ost();

    void vivod();


protected:
    double A, B, C, D, a, b, c, d;
};

