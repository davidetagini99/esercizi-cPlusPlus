#include <iostream>

int main()
{
    while (true) {
        int n1 = 0, n2 = 0, opSomma = 0;

        std::cout << "Inserisci il primo numero: ";
        std::cin >> n1;
        std::cout << "Inserisci il secondo numero: ";
        std::cin >> n2;

        if (n1 == n2) {
            opSomma = n1 + n2;

            std::cout << "La somma tra i due numeri è: " << opSomma << std::endl;
        }
        else if (n1 > n2) {
            std::cout << "Il numero maggiore è: " << n1 << std::endl;
        }
        else {
            std::cout << "Il numero maggiore è: " << n2 << std::endl;
        }
    }

    return 0;
}
