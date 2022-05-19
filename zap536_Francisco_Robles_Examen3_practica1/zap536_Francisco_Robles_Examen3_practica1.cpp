// zap536_Francisco_Robles_Examen3_practica1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús
//Primera practica el examen 3

#include <iostream>
using namespace std;

int main()
{
    srand(time(NULL));
        int matriz[3][3];
        for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
        {
            for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)

            {
                matriz[i][j] = rand() % 9;
                cout << "[" << i << "," << j << "]" << "=" << matriz[i][j] << endl;

            }
        }
        for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
        {
            for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
            {
                cout << matriz[i][j];
            }
            cout << "\n";
        }
    }

