#include <iostream>
#include<cmath>

int main()
{
    while (true) {
        double numero = 0.0;

        std::cout << "Inserisci il numero che vuoi elevare a potenza: ";
        std::cin >> numero;

        std::cout << std::endl;

        double elevatorePotenza = 0.0;

        std::cout << "Inserisci l'elevatore: ";
        std::cin >> elevatorePotenza;

        double risultatoPotenza = 0.0;

        risultatoPotenza = pow(numero, elevatorePotenza);

        std::cout << std::endl;

        std::cout << "Il numero che hai inserito, elevato all'esponente che hai scelto è uguale a: " << risultatoPotenza << std::endl;

        std::cout << std::endl;
    }
}
