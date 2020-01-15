#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include "nag.h"
using namespace std;

string pole;
string rozmiar;
string ins = "t";
string wariant;
int size2 = 12;
int licznik{};
char tab[30][30] = {};

int main()
{
	cout << "PROSTA GRA LOGICZNA" << endl;
	cout << "Czy wyswietlic instrukcje? [T/N] "; cin >> ins;
	while (ins.size() > 1 || (ins[0] != 't' && ins[0] != 'T' && ins[0] != 'N' && ins[0] != 'n'))
	{
		cout << "Niepoprawny format. Czy wyswietlic instrukcje? [T/N] ";
		cin >> ins;
	}
	system("cls");
	cout << "PROSTA GRA LOGICZNA" << endl;
	instrukcja(ins);
	if (ins == "t")
		system("pause");
	system("cls");
	cout << "PROSTA GRA LOGICZNA" << endl;
	cout << "Podaj wariant [0 - plus, 1 - krzyz]: "; cin >> wariant;
	while (wariant.size() > 1 || (wariant[0] != '0' && wariant[0] != '1'))
	{
		cout << "Niepoprawny format. Podaj wariant [0 - plus, 1 - krzyz]: ";
		cin >>wariant;
	}
	system("cls");
	cout << "PROSTA GRA LOGICZNA" << endl;
	cout << "Podaj wielkosc planszy [4-26]: "; cin >> rozmiar;
	ifvalidrozmiar(rozmiar);
	system("cls");
	for (int i = 3; i > 0; i--)
	{
		cout << "PROSTA GRA LOGICZNA" << endl << "Wariant: ";
		if (wariant[0] == '0')
			cout << "plus";
		else
			cout << "krzyz";
		cout << endl << "Wielkosc planszy: " << rozmiar;
		cout << endl << "Zaczynamy za " << i;
		Sleep(1000);
		system("cls");
	}
	size2 = stoi(rozmiar, nullptr, 10);
	cout << "PROSTA GRA LOGICZNA" << endl;
	liczby(size2);
	cout << "  Wykonane ruchy: " << licznik << endl;
	tablica(tab, size2);
	while (czyKoniec(size2, tab) == false)
	{
		licznik++;
		cout << "Podaj pole do zamiany: "; cin >> pole;
		if (wariant[0] == '0')
			zamianaPlus(tab, size2, pole);
		else
			zamianaKrzyz(tab, size2, pole);
		system("cls");
		cout << "PROSTA GRA LOGICZNA" << endl;
		liczby(size2); cout << "  Wykonane ruchy: " << licznik << endl;
		tablicaPoZamianie(tab, size2);
	}
	cout << "Wygrales!" << endl;
	system("pause");
	return 0;
}