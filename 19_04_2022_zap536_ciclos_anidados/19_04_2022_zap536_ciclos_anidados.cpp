// 19_04_2022_zap536_ciclos_anidados.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús
//En este codigo se hara un ejemplo simple de ciclos anidados

#include <iostream>
#include <Windows.h>
using namespace std;
int main()

{
	for (int A=0; A<10; A++)
	{
			cout << A << "_";
			Sleep(100);
		for (int B=0; B<10; B++)
		{
			cout << B;
			Sleep(100);
		}
		cout << "\n";
	}
}

