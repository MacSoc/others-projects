#include<iostream>
using namespace std;
int main()
{
 int i; // indeks petli
 int n; // dana wejsciowa n
 int suma ; // suma iloczynow
 //-----------------------------------------------------------------------------------
 cout << "Program wyznacza sume 1*2+2*3+...+n*(n+1)" << endl;
 cout << endl << "Podaj wartosc n: "; cin >> n; //$$$
 if ( n >= 2 && n <= 100 ) { //$$$
 suma = 0 ; //$$$
 i = 1 ; //$$$
 while( i <= n ) { //$$$
 suma = suma + i*(i+1);
 i++;
 }
 cout << endl << " 1*2+...+" << n << '*' << n+1 << " = " << suma << endl; //$$$
 }
 else cout << endl << "Zla wartosc n" << endl; //$$$
 //------------------------------------------------------------------------------------
 cout << endl;
 system ("pause");
 return 0;
}
