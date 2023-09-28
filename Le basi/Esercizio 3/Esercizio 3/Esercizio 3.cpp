#include <iostream>

int main()
{
    while (true) {
        int n1 = 0, n2 = 0, n3 = 0;

        std::cout << "Inserisci il primo numero: ";
        std::cin >> n1;

        std::cout << "Inserisci il secondo numero: ";
        std::cin >> n2;

        std::cout << "Inserisci il terzo numero: ";
        std::cin >> n3;

        bool almenoDueUguali = (n1 == n2) || (n2 == n3) || (n1 == n3);
        bool tuttiDiversi = (n1 != n2) || (n2 != n3) || (n1 != n3);

        if (almenoDueUguali) {

            std::cout << "Almeno due dei numeri inseriti sono uguali" << std::endl;
        }
        else if (tuttiDiversi) {
            if (n1 > n2 && n1 > n3) {
                std::cout << "Il numero più alto tra quelli inseriti è: " << n1 << std::endl;
            }
            else if (n2 > n1 && n2 > n3) {
                std::cout << "Il numero più alto tra quelli inseriti è: " << n2 << std::endl;
            }
            else if (n3 > n1 && n3 > n2) {
                std::cout << "Il numero più alto tra quelli inseriti è: " << n3 << std::endl;
            }

            if (n1 < n2 && n1 < n3) {
                std::cout << "Il numero più basso tra quelli inseriti è: " << n1 << std::endl;
            }
            else if (n2 < n1 && n2 < n3) {
                std::cout << "Il numero più basso tra quelli inseriti è: " << n2 << std::endl;
            }
            else if (n3 < n1 && n3 < n2) {
                std::cout << "Il numero più basso tra quelli inseriti è: " << n3 << std::endl;
            }

            int mediaTreNumeri = (n1 + n2 + n3) / 3;

            std::cout << "La media tra i tre numeri inseriti è: " << mediaTreNumeri << std::endl;
        }

    }
}