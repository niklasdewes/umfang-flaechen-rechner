#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;

class Einheit {
private:
	float laenge_a;
	float laenge_b;
	float laenge_c;
	float radius;
public:
	Einheit(float a, float b, float c, float r) {
		laenge_a = a;
		laenge_b = b;
		laenge_c = c;
		radius = r;
	}

	float umfang_viereck() {
		return (2 * laenge_a) + (2 * laenge_b);
	}

	float umfang_dreieck() {
		return laenge_a + laenge_b + laenge_c;
	}

	float umfang_kreis() {
		return M_PI * radius * 2;
	}

	float flaeche_viereck() {
		return laenge_a * laenge_b;
	}

	float flaeche_dreieck() {
		return 0.5 * laenge_a * laenge_b;
	}

	float flaeche_kreis() {
		return M_PI * radius * radius;
	}
};

int main() {
	//erste Stelle für a, zweite für b, dritte für c und vierte für den Radius
	Einheit einheit(5, 4, 0, 0);
	Einheit* eh = &einheit;

	string umfang = "\nDein Objekt hat einen Umfang von ";
	string flaeche = "\nDein Objekt hat eine Fläche von ";

	cout << "Welche Form willst Du nutzen?\n\n";

	cout << "1. Viereck\n";
	cout << "2. Dreieck\n";
	cout << "3. Kreis\n\n";

	cout << "Deine Auswahl: ";
	int form_auswahl;
	cin >> form_auswahl;

	cout << "\nWillst Du den Umfang(1) oder die Flaeche(2) erfahren?\n\n";

	cout << "Deine Auswahl: ";
	int formel;
	cin >> formel;

	switch (form_auswahl) {
	case 1:
		if (formel == 1) {
			cout << umfang << eh->umfang_viereck() << "cm.\n\n";
		}
		else {
			cout << flaeche << eh->flaeche_viereck() << "cm.\n\n";
		}
		break;
	case 2:
		if (formel == 1) {
			cout << umfang << eh->umfang_dreieck() << "cm.\n\n";
		}
		else {
			cout << flaeche << eh->flaeche_dreieck() << "cm.\n\n";
		}
		break;
	case 3:
		if (formel == 1) {
			cout << umfang << eh->umfang_kreis() << "cm.\n\n";
		}
		else {
			cout << flaeche << eh->flaeche_kreis() << "cm.\n\n";
		}
		break;
	default:
		cout << "Diese Auswahl gibt es nicht...";
	}

}