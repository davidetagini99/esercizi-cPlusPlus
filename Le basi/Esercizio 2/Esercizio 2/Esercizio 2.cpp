#include <iostream>

int main()
{
	while (true) {
		float prezzoProdotto = 0.0f;

		std::cout << "Inserisci il prezzo del prodotto: ";
		std::cin >> prezzoProdotto;

		if (prezzoProdotto > 100) {
			// sconta il prodotto del 35% e aggiungi l'IVA del 20%

			float calcoloScontoProdotto = (0.35 / 100) * prezzoProdotto;

			float calcoloIVA = (0.20 / 100) * calcoloScontoProdotto; 

			float prezzoFinale = calcoloScontoProdotto + calcoloIVA;

			std::cout << "Risultato finale sul calcolo del prodotto da scontare: " << prezzoFinale << std::endl;
		}
		else {
			std::cout << "Questo prodotto è regolare e non necessita di ulteriori sconti" << std::endl;
		}
	}
}
