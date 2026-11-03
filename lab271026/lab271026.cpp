#include <iostream>
using namespace std;

/* zad. 0

int dodawanie(int a, int b); //funkcja (zwracajaca wynik typu int)
void wyswietlanie(int a, int b); //funkcja bedaca procedura :)

int zmiennaGlobalna = 10;
int main() { //kod 04_05
	
	int a = 45, b = 25;
	int suma = dodawanie(a, b);
	cout << "Jesli dodam " << a << " do " << b << " to otrzymam " << suma << endl;
	a += 4;
	wyswietlanie(a, b);
	cout << "Zmienna globalna: " << zmiennaGlobalna << endl;
	cout << "Wartosci a oraz b: " << a << " i " << b << endl;
	return 0;
}

int dodawanie(int c, int b) {
	b = c + b;
	return b;
}

void wyswietlanie(int a, int b) {
	cout << "Wynik procedury / funkcji z void: " << a + b << endl;
	zmiennaGlobalna = 20;
	a = 111;
	b = 222;
}
//zmienne zmieniaj¹ siê tylko wewn¹trz funkcji (jeœli jest lokalna)
*/

/* zad. 1

void imie(string a);
void wyswietlanie (string a);

		int main() {
			string a;
			cout << "Podaj imie: ";
			cin >> a;
			imie(a);
	}
	void imie(string a) {
		cout << "Czesc " << a << endl;
	}

	*/

/* zad.2 

void wyswietlanie();

int main() {
	for (int i = 1; i <= 10; i++) {
		cout << endl;
		for (int j = 1; j <= 10; j++) {
			cout << i * j << "\t";
		}

	}
	
}
*/

/* zad. 3

int zmienne(int a, int b);
void wyswietlanie();

int main() {
	int a;
	int b;
	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe :";
	cin >> b;
	
	if (a > b) {
		cout << "Pierwsza liczba jest wieksza od drugiej" << endl;
	}
	if (a < b) {
		cout << "Pierwsza liczba jest mniejsza od drugiej" << endl;
	}
	if (a == b) {
		cout << "Obie liczby sa rowne" << endl;
	}
	
	
}
*/

/* zad. 4

int abc(int a, int b, int c);
void wyswietlanie();

int main() {
	int a;
	int b;
	int c;

	cout << "Podaj pierwsza liczbe: ";
		cin >> a;
	cout << "Podaj druga liczbe: ";
		cin >> b;
	cout << "Podaj trzecia liczbe: ";
		cin >> c;

}

void wyswietlanie(int a, int b, int c) {
	if (a < b && a < c) {
		cout << "Pierwsza liczba jest najmniejsza" << endl;
	}
	if (b < c && b < a) {
		cout << "Druga liczba jest najmniejsza" << endl;
	}
	if (c < a && c < b) {
		cout << "Trzecia liczba jest najmniejsza" << endl;
	}
	
}
*/

/* zad 5.

float PoleTrojkata(float a, float h);
void wyswietlanie();

int main() {
	float podstawa, wysokosc;
	cout << "Podaj podstawe trojkata: ";
	cin >> podstawa;

	cout << "Podaj wysokosc trojkata: ";
	cin >> wysokosc;

	float Pole = PoleTrojkata(podstawa, wysokosc);

	cout << "Podwojona wartosc pola trojkata wynosi: " << 2 * Pole << endl;

	return 0;
}

float PoleTrojkata(float a, float h) {
	float pole = (a * h) / 2;
	cout << "Pole trojkata wynosi: " << pole << endl;
	return pole;
} //...
*/

