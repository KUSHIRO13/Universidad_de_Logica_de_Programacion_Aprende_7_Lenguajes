# include <iostream>
# include <string>
# include <iomanip>

using namespace std;

int main() {
	//Declaracion de variables
	int edad;
	bool empleadoConfianza;
	string nombreCompleto;
	float sueldo;

	// Solicitar valores
	cout << "Proporciona tu nombre: " ;
	getline(cin, nombreCompleto);

	cout << "Proporciona tu edad: ";
	cin >> edad;

	cout << "Proporciona su sueldo: ";
	cin >> sueldo;

	cout << "Eres un empleado de confianza (1 - true|2 - false)?: ";
	cin >> empleadoConfianza;
	
	// Imprimir
	cout << "Lo que has proporcionado es" << endl;
	cout << "Nombre: " << nombreCompleto << endl;
	cout << "Edad: " << edad << endl;
	cout << fixed << setprecision(2);
	cout << "Sueldo: " << sueldo << endl;
	cout << "De Confianza: " << empleadoConfianza << endl;
	return 0;
}