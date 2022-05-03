// 26_04_2022_ZAP536_arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús
//Practica de los libros, sitanxys y arreglos

#include <iostream>
#include <string>
using namespace std;

int main()
{ //inventario de libros 5 libros
	string titulos[5]; //varios caracteres-esto es un arreglo
	string autores [5];
	int anios[5];
	int contador = 1;

	for (int aux = 0; aux <= 4; aux++) {
		
<<<<<<< Updated upstream
		cout << "Ingresa el titulo del libro num. "<< aux << endl;
		cin.ignore();
		getline(cin,titulos[aux]);
		cout << "Ingresa el autor del libro num.  " << aux << endl;
		getline(cin, autores[aux]);
		cout << "Ingresa el anio de publicacion del libro num. "<< aux << endl;
=======
		cout << "Ingresa el titulo del juego de mesa num. "<< aux << endl;
		cin.ignore();
		getline(cin,titulos[aux]);
		cout << "Ingresa el creador del juego num.  " << aux << endl;
		getline(cin, autores[aux]);
		cout << "Ingresa el anio de publicacion del juego num. "<< aux << endl;
>>>>>>> Stashed changes
		cin >> anios[aux];
		
	}
	
	for (int aux=0; aux<=4; aux++) {
<<<<<<< Updated upstream
		cout << "El titulo del primer libro es: " << titulos[aux] << endl;
		cout << "El anio de publicacion del primer libro es: " << anios[aux] << endl;
		cout << "El autor del primer libro es: " << autores[aux] << endl;
=======
		cout << "El titulo del primer juego es: " << titulos[aux] << endl;
		cout << "El anio de publicacion del primer juego es: " << anios[aux] << endl;
		cout << "El creador del primer juego es: " << autores[aux] << endl;
>>>>>>> Stashed changes
	}
	
}

