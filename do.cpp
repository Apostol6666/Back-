#include "pch.h"
#include <iostream>
#include "Header.h"

using namespace std;

int ** Zapolnenie(int **matr) {
	int i = 0, j = 0;
	for (i = 0; i != N; i++) {
		for (j = 0; j != N; j++) {
			matr[i][j] = 1;
		}
	}
	i = 0;

	for (int i = 0; i != N; i++) {
		matr[i][i] = 0;
	}
	i = 0; j = 0;

	for (i = 0; i != N; i++) {
		for (int j = 0; j != N; j++) {
			cout << matr[i][j] << "    ";
		}
		cout << endl;
	}
	i = 0; j = 0;

	return matr;

}


int ** Power(int **matr, int **matr2) {

	int **matr3 = new int*[N];
	for (int i = 0; i != N; i++) {
		matr3[i] = new int[N];
	}
	
	int str = 0;
	for (int i = 0; i != N; i++) {
		for (int j = 0; j != N; j++) {
			matr3[i][j] = 0;
			for (str = 0; str != N; str++) {
				matr3[i][j] += matr[i][str] * matr2[str][j];
				cout << matr[i][str] << "*" << matr2[str][j] << " +		" << matr3[i][j];
			}
			cout << endl;
		}
	}
	cout << endl;
	return matr3;
}

int ** Topower(int **matr, int k) {
	if (k == 0) return matr;
	
	if (k % 2) { return Topower(Power(matr, matr), k / 2); }
	else {
		return Power(matr, Topower(matr, k - 1));
	}

	/*if (k % 2) { return Power(matr, Topower(matr, k - 1)); }
	else {
		return Topower(Power(matr, matr), k / 2);
	} */
}
	


int ** Vivid(int **matr3) {
	for (int i = 0; i != N; i++) {
		for (int j = 0; j != N; j++) {
			cout << matr3[i][j] << "   ";
		}
		cout << endl;
	}
	return matr3;
}
