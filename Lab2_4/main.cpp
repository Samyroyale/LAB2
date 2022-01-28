#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int conv(char x[]){

    int numero;

    numero= atoi(x);

    return numero;
}

int main (){
    char x[]="1208973.54";

    int numero=conv(x);

    cout<<numero<<endl;

    return 0;
}
