#include "pch.h"
#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	
	int k = 0;

	int **mass = new int*[N];
	for (int i = 0; i != N; i++) {
		mass[i] = new int[N];
	}
	
	setlocale(LC_ALL, "RUSSIAN");

	cout << "Введите степень" << endl;
	cin >> k;
	k--;

	Zapolnenie(mass);
	Vivid(Topower(mass, k));
	

	//Vivid (Topower (Zapolnenie(Start()) ,/* Zapolnenie2(Start2()),*/ k));



	return 0;

}
