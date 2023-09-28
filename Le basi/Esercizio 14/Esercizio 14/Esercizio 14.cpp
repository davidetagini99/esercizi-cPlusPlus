#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    if (n <= 3) {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    while (true) {
        int numero = 0;

        std::cout << "Inserisci un numero: ";
        std::cin >> numero;

        std::cout << std::endl;

        if (isPrime(numero)) {
            std::cout << numero << " è un numero primo" << std::endl;
        }
        else {
            std::cout << numero << " non è un numero primo" << std::endl;
        }

        std::cout << std::endl;
    }
    return 0;
}
