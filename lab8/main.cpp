#include <iostream>
#include <stdlib.h>
#include <math.h>
 using namespace std;

int main()
{
    double a, b, z1, z2, u, PI, c;
    cout<<"Entered A-fa in gradusah = ";
    cin>>u;

    PI = 3.14159265;

    a = pow(2, sin(3 * PI - 2 * PI *u));
    b = pow(2, cos(5 * PI + 2u));
    c = sin(5 /2 *PI - 8 * u);

    z1 = 2 * a * b;
    z2 = (1 / 4) - (1 / 4 * c);

    cout<<"a ="<<a<< endl;
    cout<<"b ="<<b<<endl;

    cout<<"z1 = "<<z1<<endl;
    cout<<"z2 ="<<z2<<endl;
    return 0;

}
