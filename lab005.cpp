#include <iostream>
#include<vector>
using namespace std;
int main() { //czyli walka z tablicami, dajcie mi 200 lat i ogarne o co chodzi //i may not be the sharpest knife in the kitchen ale moze dam rade 

	//zad1
	//int tab[10];
	//cout << "Podaj liczby calkowite: " << endl;
	//for (int i = 0; i < 10; i++) {
	//	cin >> tab[i];
	//}
	//for (int i = 9; i >= 0; i--) {
	//	cout << tab[i];
	//}


	//zad2
	/*int n, i;
	cout << "Podaj n " << endl;
	cin >> n;
	int* tab = new int[n];
	tab[0] = 0;
	tab[1] = 1;
	cout << tab[0] << "\n" << tab[1] << endl;
	for (i = 2; i < n; i++) {
		tab[i] = tab[i - 1] + tab[i - 2];
		cout << tab[i] << endl;
	}*/


	//zad3 
	/*int tab[10], i;
	double suma = 0;
	for (i = 0; i < 10; i++) {
		tab[i] = rand() % 10 + 1;
		cout << tab[i] << endl;
	}
	double min = tab[0], max = tab[0];
	for (int i = 0; i < 10; i++) {
		suma += tab[i];
		if (tab[i] < min) {
			min = tab[i];
		}
		if (tab[i] > max) {
			max = tab[i];
		}
	}
	cout << "Srednia wynosi " << suma / 10 << endl;
	cout << "Wartosc maks: " << max << endl;
	cout<< "Wartosc min "<< min << endl;*/



	//zad4 
	/*int tab[10], n, i;
	double suma;
	suma = 0;
	cout << "Ile liczb chcesz wprowadzic: " << endl;
	cin >> n;
	for ( i = 0; i < n; i++) {
		if ((n < 0) || (n > 10)) {
			cout << "Blad" << endl;
			break;
		}
		else {
			cout << "Podaj liczbe: " << endl;
			cin >> tab[i];
			if ((tab[i] < 0) || (tab[i] > 10)) {
				cout << "Blad" << endl;
				break;
			}
			else {
				suma += tab[i];
			}
		}
		}

		double maks, min;
		min = tab[0];
		maks = tab[0];
		for (int k = 0; k < n; k++) {

			if (tab[k] < min) {
				min = tab[k];
			}
			if (tab[k] > maks) {
				maks = tab[k];
			}
	}
		cout << "Srednia wynosi " << suma/n << endl;
		cout << "Minimalna wynosi " << min << endl;
		cout << "Maksymalna wynosi " << maks << endl; */


		//zad5
		/*int tab[10], i;
		int n, k;
		for (i = 0; i < sizeof(tab) / sizeof(tab[0]);i++) {
			tab[i] = rand()%10+1;
			cout << tab[i] << endl;
			k = 0;
			n = rand() % 10 + 1;
			if (tab[i] == n) {
				k++;
			}
		}
		cout << "Szczesliwa liczba " << n << " pojawila sie " << k << " razy" << endl;*/

		//zad6
		/*int tab1[2][2] = { { 1,2 },{ 4,5 } }, tab2[2][2] = { { 3,4 }, { 6,6 } };
		for (int i = 0; i < 2; i++) {
			for (int k = 0; k < 2; k++) {
				cout << tab1[i][k] + tab2[i][k] << endl;
			}
		}*/
		//zad7
		/*int tab1[2][2] = { { 1,2 },{ 4,5 } }, tab2[2][2] = { { 3,4 },{ 6,6 } };
		for (int i = 0; i < 2; i++) {
			for (int k = 0; k < 2; k++) {
			cout << tab1[i][k] * tab2[i][k] << endl;
		}
	}*/

	//zad8
//int n, suma=0;
//cout << "Podaj wartosc macierzy kwadratowej" << endl;
//cin >> n;
//vector<vector<double>> tab(n, vector<double>(n));
//for (int i = 0; i < n; i++) {
//	for (int k = 0; k < n; k++) {
//		cout << "Podaj wartosc dla tab[" << i << "][" << k << "]" << endl;
//		cin >> tab[i][k];
//	}
//}
//for (int i = 0; i < n;i++) {
//		suma += tab[i][i]; 
//}
//cout << "suma wynosi " << suma << endl;

//zad9
	/*int tab[10];
	cout << "Podaj wartosci tabeli" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> tab[i];
	}
	por:for (int k = 0; k < 9; k++) {
		if (tab[k] > tab[k + 1]) {
			swap(tab[k], tab[k + 1]);
			goto por;
	}
	}
	cout << "\nWartosci po kolei: " << endl;
	for (int i = 0; i < 10; i++) {

		cout << tab[i] << endl;
	}*/

	//zad11
	/*int tab[8][6];
	int i, k, minw = 0, mink = 0, maxw = 0, maxk = 0;
	int max, min;
	for (i = 0; i < 8; i++) {
		for (k = 0; k < 6; k++) {
			cout << "Podaj wartosc dla tab[" << i << "][" << k << "]" << endl;
			cin >> tab[i][k];
		}
	}
			min = tab[0][0];
			max = tab[0][0];

	for (i = 0; i < 8; i++) {
		for (k = 0; k < 6; k++) {
			if (tab[i][k] > max) {
				max = tab[i][k];
				maxw = i;
				maxk = k;
			}
			if (tab[i][k] < min) {
				min = tab[i][k];
				minw = i;
				mink = k;
			}
		}
	}
	cout << "Najwieksza wartosc " << max << " znajdujaca sie w [" << maxw << "][" << maxk << "]" << endl;
	cout << "Najmniejsza wartosc " << min << " znajdujaca sie w [" << minw << "][" << mink << "]" << endl;*/

	//zad12
//int tab[6][6], suma=0 ;
//for (int i = 0; i < 6; i++) {
//	for (int k = 0; k < 6; k++) {
//		cout << "Podaj wartosc dla tab[" << i << "][" << k << "]" << endl;
//		cin >> tab[i][k];
//	}
//}
//for (int i = 0; i < 6; i++) {
//	int k = 5;
//		suma += tab[i][k - i];
//}
//cout << "Suma wynosi " << suma << endl;

//zad13 nieskonczone
int tab[3][3];
for (int i = 0; i < 3; i++) {
	for (int k = 0; k < 3; k++) {
		cout << "Podaj wartosc dla tab[" << i << "][" << k << "]" << endl;
		cin >> tab[i][k];
	}
}
for (int i = 0; i < 3; i++) {
	for (int k = 0; k < 3; k++) {
		if (tab[i][k] == tab[k][i]) {
			cout << "Jest symetryczna" << endl;
	}
		else {
			cout << "Nie jest symetryczna" << endl;
		}
	}
}


}
