#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

long long mdt;
int rok,wybor;
fstream notatki;

int main ()
{
	notatki.open("notatki.txt", ios::out);
	for(;;)
	{
		cout <<  "MENU GLOWNE" << endl;
		cout << "------------------------"<< endl;
		cout << "1. Predkosc" << endl;
		cout << "2. Swiatla" << endl;
		cout << "3. Telefon" << endl;
		cout << "4. Koniec programu" << endl;
		cout << "Wybierz notatke: ";
		cin >> wybor;
		if (wybor == 4)
			{
				notatki.close();
				exit(0);	
			}		
		cout << endl << "Miejsce: ";
		string napis,godz,minuty,miesiac,dzien;
		getline (cin,napis);
		cout << "Rok wykroczenia: 20";
		cin >> rok;
		cout << "Miesiac: ";
		cin >> miesiac;
		cout << "Dzien: ";
		cin >> dzien;
		cout << "Nr mandatu: ";
		cin >> mdt;
		cout << "Godzina: ";
		cin >> godz;
		cout << "minuta: ";
		cin >> minuty;
		cout<<endl;
			switch(wybor)
			{
				case 1:
				{
					notatki << "FRA;;20" << rok <<"-" << miesiac << "-" << dzien << ";33177686611;" << mdt << ";L'officier du ministere public Controle Automatise, CS 41101, 35911 RENNES CEDEX 9, France; Przekroczenie predkosci o godz. "<<godz<<":"<<minuty<<", miejsce: "<<napis<<endl<<endl;
				}
				break;
				case 2:
				{
					notatki << "FRA;;20" << rok <<"-" << miesiac << "-" << dzien << ";33177686611;" << mdt << ";L'officier du ministere public Controle Automatise, CS 41101, 35911 RENNES CEDEX 9, France; Przejazd na czerwonym swietle o godz. "<<godz<<":"<<minuty<<", miejsce: "<<napis<<endl<<endl;					
				}
				break;
				case 3:
				{
					notatki << "FRA;;20" << rok <<"-" << miesiac << "-" << dzien << ";33177686611;" << mdt << ";L'officier du ministere public Controle Automatise, CS 41101, 35911 RENNES CEDEX 9, France; Korzystanie z telefonu podczas prowadzenia pojazdu o godz. "<<godz<<":"<<minuty<<", miejsce: "<<napis<<endl<<endl;
				}
				break;
			}
			getchar();getchar();
			system("cls");	
	}		
	return 0;
}
