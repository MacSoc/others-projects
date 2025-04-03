#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double a=1;
    int n, i=1;

    cout << "Podaj ilosc liczb n-tych od [0,11] wyrazow ciagu liczb rzeczywistych: ";
    cin >> n;
    if ( n>0 && n<11 ){
    while( n-- ) {

    a = (i*a + 1./i);
    i++;
    cout << a <<endl;
        }
    }
    else
        cout << "Liczba nie spelnia podanych zalozen :( !!! ";

    return 0;
}
