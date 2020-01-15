#include <iostream>
#include <random>
#include <windows.h>
#include <cstdlib>
#include <string>
#include "nag.h"
using namespace std;

void zamianaPlus(char tab[30][30], int rozmiar, string &pole)
{
	int liczba{};
	ifvalidpole(rozmiar, pole);
	if (pole.size() == 2)
	{
		string liczba1 = pole.substr(1, 1);
		liczba = stoi(liczba1, nullptr, 10);
	}
	else
	{
		string liczba1 = pole.substr(1, 2);
		liczba = stoi(liczba1, nullptr, 10);
	}
	if (tab[pole[0] - 'A' + 1][liczba] == 'X')
		tab[pole[0] - 'A' + 1][liczba] = 'O';
	else
		tab[pole[0] - 'A' + 1][liczba] = 'X';

	if (tab[pole[0] - 'A' + 1][liczba + 1] == 'X')
		tab[pole[0] - 'A' + 1][liczba + 1] = 'O';
	else
		tab[pole[0] - 'A' + 1][liczba + 1] = 'X';

	if (tab[pole[0] - 'A' + 1][liczba - 1] == 'X')
		tab[pole[0] - 'A' + 1][liczba - 1] = 'O';
	else
		tab[pole[0] - 'A' + 1][liczba - 1] = 'X';

	if (tab[pole[0] - 'A' + 2][liczba] == 'X')
		tab[pole[0] - 'A' + 2][liczba] = 'O';
	else
		tab[pole[0] - 'A' + 2][liczba] = 'X';

	if (tab[pole[0] - 'A'][liczba] == 'X')
		tab[pole[0] - 'A'][liczba] = 'O';
	else
		tab[pole[0] - 'A'][liczba] = 'X';
}
void zamianaKrzyz(char tab[30][30], int rozmiar, string &pole)
{
	int liczba{};
	ifvalidpole(rozmiar, pole);
	if (pole.size() == 2)
	{
		string liczba1 = pole.substr(1, 1);
		liczba = stoi(liczba1, nullptr, 10);
	}
	else
	{
		string liczba1 = pole.substr(1, 2);
		liczba = stoi(liczba1, nullptr, 10);
	}
	if (tab[pole[0] - 'A' + 1][liczba] == 'X')
		tab[pole[0] - 'A' + 1][liczba] = 'O';
	else
		tab[pole[0] - 'A' + 1][liczba] = 'X';

	if (tab[pole[0] - 'A' + 2][liczba + 1] == 'X')
		tab[pole[0] - 'A' + 2][liczba + 1] = 'O';
	else
		tab[pole[0] - 'A' + 2][liczba + 1] = 'X';

	if (tab[pole[0] - 'A' + 2][liczba - 1] == 'X')
		tab[pole[0] - 'A' + 2][liczba - 1] = 'O';
	else
		tab[pole[0] - 'A' + 2][liczba - 1] = 'X';

	if (tab[pole[0] - 'A'][liczba + 1] == 'X')
		tab[pole[0] - 'A'][liczba + 1] = 'O';
	else
		tab[pole[0] - 'A'][liczba + 1] = 'X';

	if (tab[pole[0] - 'A'][liczba - 1] == 'X')
		tab[pole[0] - 'A'][liczba - 1] = 'O';
	else
		tab[pole[0] - 'A'][liczba - 1] = 'X';
}