// 12_05_2022_zap_536_punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús
//Apuntador

#include <iostream>
#include<Windows.h>
#include<locale>
#include<string>
using namespace std;

int main()
{
	//funciones de control
	/*system("pause"); //pause hasta tocar una tecla
	system("CLS");//limpia la consola
	Sleep(100);//detiene el programa por un tiempo

	//puntero
	int variable = 0;//variable entera
	int* apuntador = &variable; //puntero que no se pa que sirve
	cout << variable << endl; // el numero aburrido de la variable
	*apuntador = 666;
	cout << variable << endl;//numero aburrido cambiado de la variable
	cout << apuntador << endl;
	cout << *apuntador << endl;
	cout << &variable << endl;

	//borrar o liberar la memoria
	apuntador = NULL;
	*/

	/*string nombre[50];
	string* apuntador_name = nombre;

	cout << nombre << endl;
	*/

	setlocale(LC_ALL, "spanish");
	string* titulos = NULL;
	int tamanio = 0;
	cout << "cuantos libros quieres almacenar? \n";
	cin >> tamanio;
	titulos = new string[tamanio];
	//rellenar
	for (int i = 0; i < tamanio; i++)
	{
		cout << "ingresa el titulo del libro num: " << i + 1 << " es: " << endl;
		cout << titulos[i] << endl;
		if (i == 0)
		{
			cin.ignore();
		}
		getline(cin, titulos[i]);
		system("CLS");

		for (int i = 0; i < tamanio; i++)
		{
			cout << "el titulo del libro num " << i + 1 << endl;
			cout << titulos[i] << endl;
		}
		
	}
	delete[]titulos;
	titulos = NULL;
}
