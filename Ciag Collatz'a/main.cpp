#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int liczba_pier = 0;
    int liczba_dr = 0;

    int liczba_max = pow(10,4);
    int suma,i;

    cout << "Pierwszy wyraz ciagu z zakresu od [1,10^4]: " << endl;
    cin >> i;

        while ( i > 1 )
    {
        if (i%2==0)
        {
            i/=2;
            liczba_pier += 1;
        }
        else if (i%2!=0)
        {
            i = 3*i+1;
            liczba_dr += 1;
        }
    }
    suma = liczba_pier + liczba_dr;
    cout << "Ilosc ogolna liczb:  " << suma <<endl;





    return 0;
}
