#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double kat;
    double kat_max=360;
    double rad;

    cout << "Podaj wartosc kata w stopniach: ";
    cin >> kat;
    cout << setprecision(3);

    if (kat>=0 && kat<=kat_max)
    {
        cout << "X" << setw(15) << "sin(x)" << setw(20)<< -1 << setw(30) << 0 << setw(30) << 1 << endl;
        cout << "________________________________________________________________________________________________________________"<<endl;

        for ( double i=0; i<=kat; i+=5 )
        {
        rad = (i*M_PI)/180;
        cout << i << setw(15) << sin(rad) << setw(50+sin(rad)*30) << "*"<<endl;
        cout << setprecision(3);
        }

    }
    else
    {
        cout << "Podano niewlasciwy kat :( ";
    }




    return 0;
}
