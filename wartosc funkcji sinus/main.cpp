#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    double xr;
    double eps = pow(10,-8);
    double wsuma,wcur,wprev,i;

    cout << "Podaj wartosc kata w radianach, " << " 1rad. = 180^/M_PI. " << endl;
    cout << "Podaj wartosc: ";
    cin >> xr;
    //cout << "Podaj dokladnosc eps: ";
    //cin >> eps;

    //radian = (( xr * M_PI ) / 180 );

    //wprev = (xr);                            // jezeli i=1 to  x=kat
    //wcur = ((-1*wprev*xr^2)/(2*i-2)*(2*i-1));

    wcur = xr;
    i = 3;
    wsuma = wcur;

    while ( wcur>eps )
    {
        wprev = wcur;
        wcur = (-1*wprev*xr*xr)/((2*i-2)*(2*i-1));
        i+=2;
        wsuma = wsuma + wcur;

    }
    cout << "obliczona z ciagu: " << wsuma << endl;
    //cout << "wcurr: " << wcur << endl;
    cout << "obliczona z sin: " << sin(xr);



    return 0;
}
