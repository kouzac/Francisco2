// 10_05_2022_zap536_arrays_parte_2.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Francisco Gerardo Robles De Jesús
//Tamaño de arrays :)

#include <iostream>
using namespace std;
int main()
{
    /*int edades[3][2] = {{1,2},{9,8},{14,21}};
    int filas = (sizeof(edades) / sizeof(edades[0]));
    cout << filas << endl;
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    cout << columnas << endl;*/
    srand(time(NULL));
    int matriz[3][3] = { {1,1,1},{1,1,1},{1,1,1} };
    cout << "matriz de 1 \n";
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
            
        {
               
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
    cout << "matriz de numeros aleatorios de 3 por 3 \n";
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
    cout << "matriz de numeros aleatorios de 5 por 5 \n";
    srand(time(NULL));
    int matriz5[5][5];

    for (int i = 0; i < (sizeof(matriz5) / sizeof(matriz5[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz5[0]) / sizeof(matriz5[0][0])); j++)
            
        {
            matriz5[i][j] = rand() % 9;
            cout << "[" << i << "," << j << "]" << "=" << matriz5[i][j] << endl;

        }
    }
    for (int i = 0; i < (sizeof(matriz5) / sizeof(matriz5[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz5[0]) / sizeof(matriz5[0][0])); j++)
        {
            cout << matriz5[i][j];
        }
        cout << "\n";
    }
    cout << "matriz de numeros aleatorios de 10 por 10 \n";
    srand(time(NULL));
    int matriz10[10][10];

    for (int i = 0; i < (sizeof(matriz10) / sizeof(matriz10[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz10[0]) / sizeof(matriz10[0][0])); j++)

        {
            matriz10[i][j] = rand() % 9;
            cout << "[" << i << "," << j << "]" << "=" << matriz10[i][j] << endl;

        }
    }
    for (int i = 0; i < (sizeof(matriz10) / sizeof(matriz10[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz10[0]) / sizeof(matriz10[0][0])); j++)
        {
            cout << matriz10[i][j];
        }
        cout << "\n";
    }
}
