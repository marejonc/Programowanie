#include <iostream>
#include <random>
#include <windows.h>
#include <cstdlib>
#include <string>
#include "nag.h"
using namespace std;
HANDLE kolor;

void liczby(int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		cout.width(3);
		cout << i + 1;
	}
}
void tablica(char tab[30][30], int rozmiar)
{
	int rand{};
	kolor = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 1; i < rozmiar + 1; i++)
	{
		SetConsoleTextAttribute(kolor, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		cout << static_cast<char>(i + 64);
		for (int j = 1; j < rozmiar + 1; j++)
		{
			rand = random(0, 1);
			if (rand == 0)
			{
				if (j == 1)
					cout.width(2);
				else
					cout.width(3);
				SetConsoleTextAttribute(kolor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
				tab[i][j] = 'X';
				cout << tab[i][j];
			}
			else
			{
				if (j == 1)
					cout.width(2);
				else
					cout.width(3);
				SetConsoleTextAttribute(kolor, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
				tab[i][j] = 'O';
				cout << tab[i][j];
			}
		}
		cout << endl;
	}
	SetConsoleTextAttribute(kolor, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
}
void tablicaPoZamianie(char tab[30][30], int rozmiar)
{
	kolor = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 1; i < rozmiar + 1; i++)
	{
		SetConsoleTextAttribute(kolor, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
		cout << static_cast<char>(i + 64);
		for (int j = 1; j < rozmiar + 1; j++)
		{
			if (j == 1)
				cout.width(2);
			else
				cout.width(3);
			if (tab[i][j] == 'X')
				SetConsoleTextAttribute(kolor, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			else
				SetConsoleTextAttribute(kolor, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << tab[i][j];
		}
		cout << endl;
	}
	SetConsoleTextAttribute(kolor, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);
}