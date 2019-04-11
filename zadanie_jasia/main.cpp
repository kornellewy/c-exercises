#include <iostream>

using namespace std; // standardowe nazwy


int uczniowie;
int cukierki;
int cukierki_na_osobe;
int cukierki_dla_jasia;

int main()
{
    // zbieramy dane od uzytkownika
    cout << "liczba ucznow: ";
    cin >> uczniowie;
    cout << "liczba cukierkow: ";
    cin >> cukierki;
    // sprawdzenie wprowadzonych danych
    cout << "liczba ucznow: ";
    cout << uczniowie << endl;
    cout << "liczba cukierkow: ";
    cout << cukierki << endl;
    // odejmujemy jasia od liczby uczniow
    uczniowie = uczniowie - 1;
    // dzielimy liczbe cukerkow przez liczbe uczniw
    cukierki_na_osobe = cukierki / uczniowie;
    // ile zostanie cukiedkow dla jasia
    cukierki_dla_jasia = cukierki - uczniowie * cukierki_na_osobe;
    cout << "cukierki na osobe: " << cukierki_na_osobe << endl;
    cout << "cukierki dla jasia: " << cukierki_dla_jasia << endl;
    return 0;
}
