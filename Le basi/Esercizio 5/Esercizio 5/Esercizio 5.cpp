#include <iostream>

int main()
{
    while (true) {
        int n1 = 0, n2 = 0;

        std::cout << "Inserisci il primo numero: ";
        std::cin >> n1;

        std::cout << "Inserisci il secondo numero: ";
        std::cin >> n2;

        if (n1 % 2 == 0 && n2 % 2 == 0) {
            std::cout << "Tutti e due i numeri sono pari" << std::endl;

            int sommaNumeri = n1 + n2;

            std::cout << "Somma dei numeri: " << sommaNumeri << std::endl;
        }
        else if (n1 % 2 == 0 || n2 % 2 == 0) {
            std::cout << "Almeno uno dei due è pari" << std::endl;

            int prodottoNumeri = n1 * n2;

            std::cout << "Prodotto dei numeri: " << prodottoNumeri << std::endl;
        }
        else {
            std::cout << "Nessuno dei due numeri è pari" << std::endl;

            int divisioneNumeri = n1 / n2;

            std::cout << "Divisione dei numeri: " << divisioneNumeri << std::endl;
        }

        std::cout << std::endl;
     
    }
}
