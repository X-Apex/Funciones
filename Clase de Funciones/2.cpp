#include <iostream>
using namespace std;

int sumaImpares(int k) {
    int suma = 0;
    for (int i = 1; i <= k; i++) {
        suma += 2 * i - 1; 
    }
    return suma;
}

int main() {
    int k;
    cout << "Ingrese el valor de k: ";
    cin >> k;

    cout << "La suma de los " << k << " primeros números impares es: "
         << sumaImpares(k) << endl;

    return 0;
}