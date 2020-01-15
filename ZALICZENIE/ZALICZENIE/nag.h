#pragma once
using namespace std;

void ifvalidpole(int size1, string&);
void ifvalidrozmiar(string&);
int random(int a, int b);
void tablica(char tab[30][30], int rozmiar);
void liczby(int rozmiar);
bool czyKoniec(int rozmiar, char tab[30][30]);
void zamianaPlus(char tab[30][30], int rozmiar, string&);
void zamianaKrzyz(char tab[30][30], int rozmiar, string&);
void tablicaPoZamianie(char tab[30][30], int rozmiar);
void instrukcja(string ins);