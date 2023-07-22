#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main4() {
	// Declaracion de variable
	int entero;
	
	// Introducion
	cout << "Proporciona un numero: ";
	cin >> entero;

	// Desplegue
	cout << "El valor es: " << entero << endl;

	//Ahora con el nombre
	string nombre;
	cout << "Proporciona el nombre: ";
	//cin >> nombre;
	cin.ignore(); //Limpia el buffer
	getline(cin, nombre);
	cout << "Ya veo te llamas " << nombre << endl;

	return 0;
}