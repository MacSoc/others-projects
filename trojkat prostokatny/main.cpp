#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cout << "Wczytaj liczbe calkowita w zakresie od [1,30] jako dlugosc przyprostokatnych trojkata rownoramiennego : ";
    cin >> liczba;
    if ( liczba>=1 && liczba<=30 ){

        for ( int i=0; i<liczba; i++){
                for ( int j=1; j<=liczba-i; j++){
                    cout << "x";
                }
                cout << endl;
        }
    }
    else
        cout << "Wprowadzono niepoprawne dane :( !!! " << endl;

    return 0;
}
