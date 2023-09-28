#include <iostream>

int main()
{
	while (true) {
		int q = 0, r = 0; // quoziente e resto

		int n = 0, d = 0; // numero e dividendo

		std::cout << "Inserisci il numero: ";
		std::cin >> n;

		std::cout << std::endl;

		std::cout << "Inserisci il dividendo: ";
		std::cin >> d;

		std::cout << std::endl;

		while (n >= d) {
			n -= d;
			q++;
		}

		r = n;
	}
}
