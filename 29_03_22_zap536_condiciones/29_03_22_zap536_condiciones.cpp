// 29_03_22_zap536_condiciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús.
//este es un archivo de guia para las sintaxys.

#include <iostream>

int main()
{
	//ejemplo de condición simple.
	/*int edad = 0;
	std::cout << "ingresa tu edad: \n";
	std::cin >> edad;
	//condición if - dentro del parentesis lo que vamos a analizar.
	if (edad>18)
	{
	//si se cumple la condición se ejecuta esto.
	std::cout << "la condicion se cumplio" << std::endl;
	std::cout << "Se dice que es mayor de edad: " << std::endl;
	}
	std::cout << "estas despues de la condicion: \n";

	//ejemplo de ejecución doble.
	if (edad >= 18)
	{
	//si se cumple se ejecuta esto
	std::cout << "es mayor de edad \n";

	}
	else
	{
	//esto se ejecuta si es falso
	std::cout << "tas muy joven aun \n";
	}
	if (edad <= 18)
	{
		std::cout << "lo lamento este juego es para mayorres de edad. \n";
	}
	else(edad >= 15);
	{
		std::cout << "espera unos cuantos años. \n";
	}
	std::cout << "la ejecucion terminara pronto \n";
	std::cout << "ya que no hay mas condiciones para evaluar \n";*/


	std::string jugador1 = "Manuel";
	int ataque1 = 0;

	std::string jugador2 = "Ruben";
	int ataque2 = 0;

	std::string jugador3= "Mauricio";
	int ataque3 = 0;

	std::string Jugador4 = "Francisco";
	int ataque4 = 0;

	std::string Jugador5 = "Rogelio";
	int ataque5 = 0;

	std::string Jugador6 = "Cristina";
	int ataque6 = 0;

	std::string Jugador7 = "Rafa";
	int ataque7 = 0;

	std::string Jugador8 = "Ivan";
	int ataque8 = 0;

	std::string Jugador9 = "Dylan";
	int ataque9 = 0;

	std::string Jugador10 = "Angel";
	int ataque10 = 0;

	std::cout << "ingrese el ataque de manuel \n";
	std::cin >> ataque1;

	std::cout << "ingrese el ataque de ruben \n";
	std::cin >> ataque2;

	std::cout << "ingrese el ataque de Mauricio \n";
	std::cin >> ataque3;

	std::cout << "ingrese el ataque de Francisco \n";
	std::cin >> ataque4;

	std::cout << "ingrese el ataque de Rogelio \n";
	std::cin >> ataque5;

	std::cout << "ingrese el ataque de Cristina \n";
	std::cin >> ataque6;

	std::cout << "ingrese el ataque de Rafa \n";
	std::cin >> ataque7;

	std::cout << "ingrese el ataque de Ivan \n";
	std::cin >> ataque8;

	std::cout << "ingrese el ataque de Dylan \n";
	std::cin >> ataque9;

	std::cout << "ingrese el ataque de Angel \n";
	std::cin >> ataque10;
		
	if (ataque1 > ataque2 && ataque1 > ataque3 && ataque1 > ataque4 && ataque1 > ataque5 && ataque1 > ataque6 && ataque1 > ataque7 && ataque1 > ataque8 && ataque1 > ataque9 && ataque1 > ataque10);
	std::cout << "Manuel gano \n";

	if (ataque2 > ataque1 && ataque2 > ataque3 && ataque2 > ataque4 && ataque2 > ataque5 && ataque2 > ataque6 && ataque2 > ataque7 && ataque2 > ataque8 && ataque2 > ataque9 && ataque2 > ataque10);
	std::cout << "Ruben gano \n";

	if (ataque3 > ataque2 && ataque3 > ataque1 && ataque3 > ataque4 && ataque3 > ataque5 && ataque3 > ataque6 && ataque3 > ataque7 && ataque3 > ataque8 && ataque3 > ataque9 && ataque3 > ataque10);
	std::cout << "Manuel gano \n";


}


