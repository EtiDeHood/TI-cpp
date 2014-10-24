#include <iostream>
#include <string>
using namespace std;
string vorname = "Reinhold";
string nachname = "Yabo";
string fussballverein = "KSC";
string vorname1, nachname1;
string gesamtname = vorname + " " + nachname;
string gesamtname1 = vorname1 + " " + nachname1;
string verein = fussballverein + " ein Leben lang!";

string position;
string position1;



void main(void)
{
	cout << "Name des Spielers lautet: " << gesamtname << endl << endl;
	cout << "geben Sie den Vornamen ein" << endl << endl;
	cin >> vorname1;
	cout << "geben Sie den Nachnamen ein" << endl << endl;
	cin >> nachname1;
	cout << "neuer Gesamtname: " << gesamtname1 << endl << endl;

	if (gesamtname == gesamtname1)
	{
		cout << "gleicher Spieler" << endl;

	}
	else
	{
		cout << "unterschiedliche Spieler" << endl;
	}
	
	cout << "Auf welcher Position spielt " << gesamtname << "?" << endl << endl;
	position = "ZDM";
	cin >> position1;

	if (position == position1){

		cout << "Richtig! Dieser Spieler spielt auf Position " << position << endl << endl;

	}
	else
	{
		cout << gesamtname << "ist nicht auf dieser Position zu finden!" << endl;
	}

	

	system("pause");
}
