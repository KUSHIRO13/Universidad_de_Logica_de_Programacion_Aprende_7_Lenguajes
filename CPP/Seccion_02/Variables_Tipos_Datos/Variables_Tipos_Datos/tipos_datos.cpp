# include <iostream>
# include <iomanip>

using namespace std;

int main2() {
	// Tipo entero
	int entero = 19;
	cout << "Entero: " << entero << endl;
	// Tipo Flotante
	float flotante = 8.9;
	cout << fixed << setprecision(2);
	cout << "Flotante: " << flotante << endl;
	// Tipo double
	double doble = 9.9999;
	cout << "Doble: " << doble << endl;
	// Tipo char
	char charater = 'a';
	cout << "Caracter: " << charater << endl;
	char character_special = 92;
	cout << "Caracter ASCII: " << character_special << endl;
	// Tipo  booleano
	bool verdadero = true;
	bool falso = false;
	cout << "Verdadero: " << verdadero << endl;
	cout << "Falso: " << falso << endl;
	// Tipo Cadena
	char cadena[] = "Hola";
	cout << "Cadena 1: " << cadena << endl;
	string cadena1 = "Adios";
	cout << "Cadena : " << cadena1 << endl;
	return 0;
}