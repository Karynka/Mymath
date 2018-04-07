#include <iostream>
#include <cmath>
#include "mymath.h"

using namespace std;

int main()
{
double r, h, l;
cout << "Give the base radius of a Cone:";
cin >> r;
cout << "Give the length of the hatch:";
cin >> l;
cout << "Give the height of a Cone:";
cin >> h;

cout << "Volume of a Cone equals:" << VolumeofaCone(r, h) << endl;

cout << "Diameter base of a Cone equals:" << DiameterbaseofaCone(r) << endl;

cout << "Area base of a Cone equals:" << AreabaseofaCone(r) << endl;

cout << "Area lateral of a Cone equals:" << ArealateralofaCone(r, l) << endl;

cout << "Area of a Cone equals:" << AreaofaCone(r, l) << endl;

return 0;
}
