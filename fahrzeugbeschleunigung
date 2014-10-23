#include <iostream>
using namespace std;

long double Umrechnung(short vkmh); //Funktion zur Umrechnung von km/h in m/s
long double Beschleunigung(long double vmsa, float tsa); //Funktion zum Beschleunigung errechnen aus v (in m/s) und t (in s)
long double Geschwindigkeit(long double a, float t); //Funktion zum Berechnen der Geschwindigkeit in m/s zum Zeitpunkt t (auch in s)
long double Umrechnung2(long double v2); //Funktion zum Umrechnen der Geschwindigkeit von m/s in km/h
long double Strecke(long double a, float t); //Funktion zum Berechnen der zur¸ckgelegten Strecke in m zum Zeitpunkt t in s

short vkmh = 0; //Geschwindigkeit auf die Beschleunigt wird in km/h
long double vmsa = 0; //Geschwindigkeit auf die Beschleunigt wird in m/s
float tsa = 0; // Zeit in welcher auf obige Geschwindigkeit beschleunigt wird in s
long double a = 0; //Beschleunigung in m/s≤
float t = 0; //Zeitpunkt nach dem gefragt wird
long double v2 = 0; //Geschwindigkeit zum Zeitpunkt t in m/s
long double v = 0; //Geschwindigkeit zum Zeitpunkt t in km/h
long double s = 0; //Zur¸ckgelegte Strecke zum Zeitpunkt t in m


void main()
{
	cout << "Geschwindigkeit auf die Beschleunigt wird in km/h: \n";
	cin >> vkmh;
	vmsa = Umrechnung(vkmh);
	cout << "Geschwindigkeit auf die Beschleunigt wird in m/s:" << vmsa << "\n";

	cout << "Zeit in s, in welcher auf genannte Geschwindigkeit beschleunigt wird: \n";
	cin >> tsa;
	a = Beschleunigung(vmsa, tsa);
	cout << "Beschleunigung in m/s≤:" << a << "\n";

	cout << "Infos zum Zeitpunkt T= \n";
	cin >> t;
	v2 = Geschwindigkeit(a, t);
	v = Umrechnung2(v2);
	s = Strecke(a, t);
	cout << "Geschwindigkeit in m/s:" << v2 << "\n";
	cout << "Geschwindigkeit in km/h:" << v << "\n";
	cout << "Zur¸ckgelegte Strecke in m:" << s << "\n";

	system("pause");
}


long double Umrechnung(short vkmh){
	return vkmh / 3.6;
}

long double Beschleunigung(long double vmsa, float tsa){
	return vmsa / tsa;
}

long double Geschwindigkeit(long double a, float t){
	return a*t;
}

long double Umrechnung2(long double v2){
	return v2*3.6;
}

long double Strecke(long double a, float t){
	return 0.5*v2*a*t*t;
}
