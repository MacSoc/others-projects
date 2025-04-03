#include <iostream>

using namespace std;

int main()
{

    int liczba[4];
    int n;

    for ( int i=1; i<=4; i++)
    {
        cout << "Podaj " << i << " liczbe z klawiatury: ";
        cin >> n;
        if (n==i)
        {
            cout << "koniec" << endl;
            break;
        }
    }
    return 0;
}

