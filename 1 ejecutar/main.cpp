#include <iostream>

using namespace std;


int main()
{
    /*
    int edad;
    cout << "ingresa tu edad: " << endl;
    cin >> edad;
    cout << "El proximo anio tendras " << edad + 1 <<" anios";
    */

    cout << "int: " << sizeof(int) << endl;
    cout << "short int: " << sizeof(short int) << endl;
    cout << "long int: " << sizeof(long int) << endl;
    cout << "char: " << sizeof(char) << endl;

    int x = 8, y = 5;
    double z = x / (double)y;
    cout << "z = " << z << endl;

    return 0;
}
