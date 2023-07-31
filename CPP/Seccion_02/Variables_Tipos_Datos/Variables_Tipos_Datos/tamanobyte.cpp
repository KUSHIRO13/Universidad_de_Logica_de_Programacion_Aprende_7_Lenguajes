#include <iostream>
#include <string>

using namespace std;

int main(){
    int entero = 10;
    float flotante = 2.8;
    double doble = 6.999;
    char caracter = 'A';
    bool booleano = true;
    string cadena = "Hola"; 

    cout << "int tamaño en byte: "<< sizeof(entero) << endl;
    cout << "float tamaño en byte: "<< sizeof(flotante) << endl;
    cout << "double tamaño en byte: "<< sizeof(doble) << endl;
    cout << "char tamaño en byte: "<< sizeof(caracter) << endl;
    cout << "bool tamaño en byte: "<< sizeof(booleano) << endl;
    cout << "string tamaño en byte: "<< sizeof(cadena) << endl;
    cout << "string.len tamaño en byte: "<< cadena.length() << endl;
    cout << "string.size tamaño en byte: "<< cadena.size() << endl;
    return 0;
}