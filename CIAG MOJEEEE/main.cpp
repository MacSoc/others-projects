#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    double xr;
    double wsuma, wcur, wprev, i;
    double eps=pow(10,-8);

    cout << "Podaj kat w radianach: ";
    cin >> xr;



    wcur = xr;
    wsuma = wcur;
    i = 2;

    while ( wcur>eps )
    {
        wprev = wcur;
        wcur = ((-1*wprev*(xr*xr))/(2*i-2)*(2*i-1));
        i++;
        wsuma = wsuma + wcur;
    }
    cout << "obliczona z ciagu: " << wsuma << endl;
    //cout << "wcurr: " << wcur << endl;
    cout << "obliczona z sin: " << sin(xr);
    return 0;
}
