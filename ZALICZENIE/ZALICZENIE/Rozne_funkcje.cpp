#include <iostream>
#include <random>
#include <windows.h>
#include <cstdlib>
#include <string>
#include "nag.h"
using namespace std;

int random(int a, int b)
{
	random_device losowa;
	mt19937 generator1(losowa());
	uniform_int_distribution<int> rand(a, b);
	return rand(losowa);
}
bool czyKoniec(int rozmiar, char tab[30][30])
{
	bool czyX = true;
	for (int i = 1; i < rozmiar + 1; i++)
		for (int j = 1; j < rozmiar + 1; j++)
			if (tab[i][j] == 'O')
				czyX = false;
	if (czyX == false)
		return false;
	else
		return true;
}
void ifvalidpole(int size1, string &liczba) //sprawdzanie wpisanego pola, wpisywanie innego
{
	bool k = false;
	string liczba1;
	int pom{};
	while (k == false)
	{
		if (liczba[0] >= 'a' && liczba[0] <= 'a' + size1)
			liczba[0] -= 32;
		while (liczba.size() > 3 || liczba.size() < 2 || liczba[0] > 'A' + size1 || liczba[0] < 'A' ||
			liczba[1] < '1' || liczba[1]>'9' || ((liczba[2] < '0' || liczba[2]>'9') && liczba[2] != 0))
		{
			cout << "Niepoprawny format. Wpisz pole jeszcze raz: "; cin >> liczba;
			if (liczba[0] >= 'a' && liczba[0] <= 'a' + size1)
				liczba[0] -= 32;
		}
		if (liczba.size() == 2)
		{
			liczba1 = liczba.substr(1, 1);
			pom = stoi(liczba1, nullptr, 10);
			if (pom > size1)
			{
				cout << "Niepoprawny format. Wpisz pole jeszcze raz: "; cin >> liczba;
			}
			else
				k = true;
		}
		else
		{
			liczba1 = liczba.substr(1, 2);
			pom = stoi(liczba1, nullptr, 10);
			if (pom > size1)
			{
				cout << "Niepoprawny format. Wpisz pole jeszcze raz: "; cin >> liczba;
			}
			else
				k = true;
		}
	}
}
void ifvalidrozmiar(string& rozmiar)
{
	bool k = false;
	int pom{};
	string liczba1;
	while (k == false)
	{
		while (rozmiar.size() > 2 || rozmiar.size() < 1 || rozmiar[0] < '1' || rozmiar[0]>'9'
			|| ((rozmiar[1] < '0' || rozmiar[1]>'9') && rozmiar[1] != 0))
		{
			cout << "Niepoprawny rozmiar. Podaj wymiar jeszcze raz: "; cin >> rozmiar;
		}
		if (rozmiar.size() == 1)
		{
			liczba1 = rozmiar.substr(0, 1);
			pom = stoi(liczba1, nullptr, 10);
			if (pom < 4)
			{
				cout << "Niepoprawny rozmiar. Podaj wymiar jeszcze raz: "; cin >> rozmiar;
			}
			else
				k = true;
		}
		else
		{
			liczba1 = rozmiar.substr(0, 2);
			pom = stoi(liczba1, nullptr, 10);
			if (pom > 26)
			{
				cout << "Niepoprawny rozmiar. Podaj wymiar jeszcze raz: "; cin >> rozmiar;
			}
			else
				k = true;
		}
	}
}
void instrukcja(string ins)
{
	char po = 0xCD;
	char pi = 0xBA;
	char lg = 0xC9;
	char pg = 0xBB;
	char ld = 0xC8;
	char pd = 0xBC;
	if (ins[0] == 'T' || ins[0] == 't')
	{
		cout << lg;
		for (int i = 0; i < 90; i++)
			cout << po;
		cout << pg << endl;
		cout << pi;
		for (int j = 0; j < 40; j++)
			cout << " ";
		cout << "INSTRUKCJA";
		for (int j = 0; j < 40; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		cout << "Witaj w prostej grze logicznej. Twoim zadaniem jest wypelnienie calej tablicy znakiem 'X'.";
		cout << pi << endl;
		cout << pi;
		cout << "Mozesz tego dokonac poprzez wpisywanie w odpowiednim momencie odpowiednich pol.           " << pi << endl;
		cout << pi << "Do wyboru masz dwa warianty gry : ";
		for (int j = 0; j < 56; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		cout << "Pierwszy (plus) zamienia pola na tablicy w nastepujacy sposob: ";
		for (int j = 0; j < 27; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << "O O O    O X O";
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << "O O O    X X X";
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << "O O O    O X O";
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		cout << "Drugi (krzyz) zamienia pola na tablicy w nastepujacy sposob: ";
		for (int j = 0; j < 29; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << "O O O    X O X";
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << "O O O    O X O";
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << "O O O    X O X";
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi << "Pole srodkowe to pole wybrane przez gracza.";
		for (int j = 0; j < 47; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi << "Zaraz zostaniesz poproszony/a o podanie wariantu gry oraz rozmiaru tablicy.               " << pi << endl;
		cout << pi << "Aby zakonczyc wyswietlanie instrukcji wcisnij dowolny klawisz.";
		for (int j = 0; j < 28; j++)
			cout << " ";
		cout << pi << endl;
		cout << pi;
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << "MILEJ ZABAWY!!";
		for (int j = 0; j < 38; j++)
			cout << " ";
		cout << pi << endl;
		cout << ld;
		for (int i = 0; i < 90; i++)
			cout << po;
		cout << pd << endl;
	}
}