#include "RandomNumber.hpp"

double RandomNumber::uniform()
{
    int r=rand();
    int m=RAND_MAX+1;

    return (r+1.0)/(m+1.0);
}

double RandomNumber::uniform(double l, double r)
{
    if(l<r) std::swap(l, r);
    double d=r-l;

    return l+d*uniform();
}

double RandomNumber::exponential(double mean)
{
    return -mean*log(uniform());
}
