#include <iostream>

using namespace std;

int main ()
{
    int liczba;
    int suma = 0;
    int znak = 1;           // przykladowo 1, bo po prostu musi byc dodatni ;)


    do {
    if (znak>0)
        cout << "Dodaj ";
    else
        cout << "Odejmij ";
    cout << " liczbe calkowita: "; cin >> liczba;
    suma = suma + znak * liczba;
    cout << "Suma: " << suma << endl;
    znak = - znak;


    }   while (liczba != 0);



    return 0;
}
