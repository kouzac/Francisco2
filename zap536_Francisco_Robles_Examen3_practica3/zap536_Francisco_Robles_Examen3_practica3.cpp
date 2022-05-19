// zap536_Francisco_Robles_Examen3_practica3.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Practica 3
//Francisco Gerardo Robles De Jesús

#include <iostream>
#include<String>
using namespace std;

int main()
{
    srand(time(NULL));
    int filas, columnas;
    string nombre;
    cout << "ingrese el numero de filas y columnas \n";
    cin >> filas >> columnas;
    int** arreglo = new int* [filas];

    for (int i = 0; i < filas; i++) 
    {
        arreglo[i] = new int[columnas];
    }
    for (int i = 0; i < filas; i++) 
    {
        for (int j = 0; j < columnas; j++) 
        {
            arreglo[i][j] = 0;
            if (filas && columnas < 3)
            {
                arreglo[i][j] = rand() % 10;
                cout << "Num[" << i << "][" << j << "]" << arreglo[i][j] << endl;
            }
            else
            {
                cout << "Num[" << i << "][" << j << "]: ";
                cin >> arreglo[i][j];
            }
        }
        for (int i = 0; i < filas; i++) 
        {
            for (int j = 0; j < columnas; j++)
            {
                cout << arreglo[i][j];
            }
            cout << "/n";
        }
        for (int i = 0; i < filas; i++)
        {
            delete[] arreglo[i];
        }
    }
    delete[] arreglo;
    arreglo = NULL;
}

