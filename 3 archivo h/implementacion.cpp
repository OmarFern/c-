#include<iostream>
#include "header.h"

using namespace std;

int cuadrado(int x){
    return x*cubo(x) ;
};
int cubo(int x){
    return x*x ;
};

int main(){
    cout << cuadrado(2) ;

};
