#include <iostream>
#include <string>
#include <cmath>

int obtenerDigitoDerechaAIzquierda(int numero, int posicion) {
    std::string numStr = std::to_string(std::abs(numero));
    int totalDigitos = numStr.length();
    
    if (posicion < 1 || posicion > totalDigitos) {
        std::cerr << "Error: Posicion fuera de rango (el numero tiene " << totalDigitos << " digitos)." << std::endl;
        return -1; 
    }
    

    int posicionAjustada = posicion - 1;
    

    int indiceString = (totalDigitos - 1) - posicionAjustada;
    
    
    return numStr[indiceString] - '0';
}

int main() {
    int numero;
    int posicion;
    
    std::cout << "Ingrese un numero entero: ";
    std::cin >> numero;
    
    std::cout << "Ingrese la posicion: ";
    std::cin >> posicion;
    
    int digito = obtenerDigitoDerechaAIzquierda(numero, posicion);
    
    if (digito != -1) {
        std::cout << "El digito en la posicion " << posicion << " es: " << digito << std::endl;
    }
    
    return 0;
}