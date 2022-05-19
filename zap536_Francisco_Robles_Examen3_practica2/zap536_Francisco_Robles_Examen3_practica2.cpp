// zap536_Francisco_Robles_Examen3_practica2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús
//practica dos

#include <iostream>
#include<string>
using namespace std;

int main()
{
    string nombres[3];
    int edades[3];
    for (int aux = 0; aux <= 2; aux++) 
    {
        cout << "ingresa el nombre num: " << aux << endl;
        cin.ignore();
        getline(cin, nombres[aux]);
        cout << "ingresa las edades de la persona num: " << aux << endl;
        cin >> edades[aux];
    }
    for (int aux = 0; aux <= 2; aux++)
    {
        cout << "El nombre de la persona num: " << aux << " es " << nombres[aux] << endl;
        cout << "La edad de la persona num: " << aux << " es " << edades[aux] << endl;
    }

}

