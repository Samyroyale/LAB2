#include<iostream>
using namespace std;



int factorial(int n) {
    int fact;
    int i;
    fact = 1;
    for (i=n;i>=1;i--) {
        fact = fact*i;
    }
    return fact;
}

int main() {
    int camino;
    int den;
    int n;
    int num;
    cout << "INGRESE EL VALOR DE LA MALLA " << endl;
    cin >> n;
    num = factorial(n+n);
    den = factorial(n)*factorial(n);

    camino = num/den;
    cout << "PARA UNA MALLA " << n << "X" << n << " PUNTOS HAY " << camino << " CAMINOS. " << endl;
    return 0;
}
