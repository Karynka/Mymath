#include <cmath>


double VolumeofaCone(double r, double h)
{
    double V;
    V=(3.14*r*r*h)/3;
    return V;
}



double DiameterbaseofaCone(double r)
{
    double D;
    D=2*r;
    return D;
}



double AreabaseofaCone(double r)
{
    double Ab;
    Ab=3.14*r*r;
    return Ab;
}



double ArealateralofaCone(double r, double l)
{
    double Al;
    Al=3.14*r*l;
    return Al;
}



double AreaofaCone(double r, double l)
{
    double A;
    A=(3.14*r*r)+(3.14*r*l);
    return A;
}
