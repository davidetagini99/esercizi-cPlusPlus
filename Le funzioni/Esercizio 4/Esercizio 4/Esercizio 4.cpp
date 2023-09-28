using namespace std;

#include <iostream>

char controllaCarattereLettera(char letteraPassata) {
	letteraPassata = tolower(letteraPassata);

	if (letteraPassata >= 'a' && letteraPassata <= 'z') {
		if (letteraPassata == 'a' || letteraPassata == 'e' || letteraPassata == 'i' || letteraPassata == 'o' || letteraPassata == 'u') {
			cout << "Hai inserito una vocale";
			return 0;
		}
		else {
			cout << "La lettera che hai inserito, non è una vocale ma una consonante";
			return 1;
		}
	}
}

int main()
{
	while (true) {
		char insLettera = 'a';

		cout << "Inserisci una lettera: ";
		cin >> insLettera;

		cout << endl;

		cout << controllaCarattereLettera(insLettera);

		cout << endl;
		cout << endl;
	}
}
