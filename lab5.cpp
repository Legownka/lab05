#include <iostream>
using namespace std;
int main() {

	////zad1
	//int tab[9];
	//for (int k = 0; k <= 9; k++) {
	//	cout << "Podaj liczbe: " << endl;
	//	cin >> tab[k];
	//}
	//for (int i = 9; i >= 0; i--) {
	//	cout << tab[i] << endl;
	//}

	//zad2
	/*int n, i;
	cout << "Podaj liczbe n: " << endl;
	cin >> n;
	int* fib = new int[n];
	fib[0] = 0;
	fib[1] = 1;
	cout << fib[0] << "\n" << fib[1] << endl;
	for (i = 2; i <= n; i++) {
		fib[i] = fib[i - 2] + fib[i - 1];	
		cout << fib[i] << endl;
	}*/
	
	//zad3
	/*int tab[10], i;
	double suma;
	suma = 0;
	cout << "Wylosowane liczby: " << endl;
	for (i = 0; i <= 9; i++) {
		tab[i] = rand() % 10 + 1;
		cout << tab[i] << endl;
		suma += tab[i];
	}
	cout << "Srednia " << suma/10 << endl;
	cout << "Liczby mniejsze od sredniej: " << endl;
	for (int k= 0; k<=9; k++)
		if (tab[k] < suma / 10) {
			cout << tab[k] << endl;
	}

	int max, min;
	max = tab[0];
	min = tab[0];
	for (int k = 0; k <= 9; k++) {
		if (tab[k] < min) {
			min = tab[k];
			
		}
		if (tab[k] > max) {
			max = tab[k];
			
		}
	}
cout << "Minimum " << min << endl;
cout << "Maksimum " << max << endl;*/

	//zad4
	/*int tab[9], n;
	double suma=0;
	cout << "Ile chcesz podac liczb? " << endl;
	cin >> n;
	if ((n < 0) || (n > 10)) {
		cout << "BLAD" << endl;
	}
	else {
	cout << "Podaj dane tablicy " << endl;
	for (int i = 0; i <= n-1; i++) {
	wpis: 	cin >> tab[i];
		if ((tab[i] < 0) || (tab[i] > 10)) {
			cout << "BLAD" << endl;
			goto wpis;
		}
		suma += tab[i];
	}
	int min, max;
	min = tab[0];
	max = tab[0];
	for (int k = 0; k <= n-1; k++) {
		if (tab[k] < min) {
			min = tab[k];
		}
		if (tab[k] > max) {
			max = tab[k];
		}
	}
	cout << "Srednia wynosi " << suma / 10 << "\nMinimalna wynosi " << min << "\nMaksymalna wynosi " << max << endl;
	}*/
	
	//zad5


}