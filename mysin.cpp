#include "mysin.h"
#include <stdio.h>

class MySin {

public:

MySin();
MySin(double x);
MySin(const MySin &obj);
~MySin();
double value();
void setX(double);
double getX();
};