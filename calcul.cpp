#include "calcul.h"

calcul::calcul(double _a, double _b):a(_a), b(_b)
{

}

double calcul::sum()
{
   return a+b;
}

double calcul::dif()
{
   return a-b;
}

double calcul::mult()
{
    if(!a || !b)
    {
        return -1;
    }
   return a*b;
}

double calcul::div()
{
    if(!a || !b)
    {
        return -1;
    }
   return a/b;
}
