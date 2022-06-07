// 17_05_2022_zap536_Puntero_de_punteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús
//Punteros dobles

#include <iostream>
#include<Windows.h>
#include<stdlib.h>
using namespace std;


int main()
{
    srand(time(NULL));
    cout << "ingrese el numero de filas y columnas \n";
    int filas, columnas;
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
            if (filas || columnas > 3)
            {
                arreglo[i][j] = rand()%9;
                cout << "numero[" << i << "][" << j << "]:" << arreglo[i][j] << endl;
            }
            else
            {
                cout << "numero[" << i << "][" << j << "]:";
                cin >> arreglo[i][j];
            }
        }
    }
    cout << "----------------------------------------------------------------------------------------------------------------------- \n";
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << arreglo[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i > filas; i++)
    {
        delete[] arreglo[i];
    }
    delete[]arreglo;
    arreglo = NULL;
}
