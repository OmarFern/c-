#include <iostream>
using namespace std;
//ejemplo de implementacion pasando por referencia

void swap(int &a, int &b){
    int t=a;a=b;b=t;
}

int main() {
    int q=3;
    int r=5;
    swap(q,r); // cambia por referencia &
    cout << "q = "<< q << endl ;//5
    cout << "r = "<< r << endl ;//3

    return 0 ;
}