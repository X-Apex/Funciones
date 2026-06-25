#include <iostream>

using namespace std;

// Declaracion
int calcularCuadrado(int numero) {
    return numero * numero;
}

int main() {
    cout << "Cuadrado de los numeros enteros:" << endl;
    cout << "------------------------------------------------------------" << endl;

    // El ciclo de 11 al 24 
    for (int i = 11; i <= 24; i++) {
        int resultado = calcularCuadrado(i); 
        cout << "El cuadrado de " << i << " es: " << resultado << endl;
    }

    return 0;
}