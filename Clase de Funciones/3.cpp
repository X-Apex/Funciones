#include <iostream>

void intercambiar(int &a, int &b) {
    int temp = a; 
    a = b;            
    b = temp;   
}

int main() {
    int num1, num2;

    std::cout << "Ingrese el primer valor (A): ";
    std::cin >> num1;
    
    std::cout << "Ingrese el segundo valor (B): ";
    std::cin >> num2;

    std::cout << "\n--- Valores originales ---" << std::endl;
    std::cout << "A = " << num1 << ", B = " << num2 << std::endl;

    
    intercambiar(num1, num2);

    std::cout << "\n--- Valores intercambiados ---" << std::endl;
    std::cout << "A = " << num1 << ", B = " << num2 << std::endl;

    return 0;
}