#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
    int liczba_max = pow(10,4);
    int liczba=2;

    cout << "Podaj liczbe n nalezaca do przedzialu [1,10^4]: " << endl;


         while ( liczba > 1)
    {
        if (liczba%2==0)
        {
            liczba/=2;
            liczba++;
        }
        else if (liczba%2!=0)
        {
            liczba = 3*liczba+1;
            liczba++;
        }
        cout << liczba << endl;
    }





    return 0;
}
