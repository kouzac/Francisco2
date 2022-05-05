// 09_04_2022_zap536_practica_5_if_else.cpp : Este archivo contiene la función "main". La ejecución
//del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús.
//este es un archivo de confirmación para los datos de un paciente.
#include <iostream>
using namespace std;
int main()
{
	//datos del paciente
	string nombre = "Francisco";
	int edad = 18;
	string enfermedad = "astigmatismo";
	string mes_de_nacimiento = "julio";
	string genero = "Masculino";
	float altura = 1.92;
	string padre = "Saul";
	string madre = "Olivia";
	string discapacidad = "ninguna";
	string nivel_de_estudio = "preparatoria";
	
	//procesamiento de la informacion

	cout << "ingrese el nombre del paciente \n";
	cin >> nombre;
	if (nombre == "Francisco")
	{
		cout << "El nombre del paciente es correcto \n";
	}
	else
	{
		cout << "El perfil ingresdo no existe \n";
		system("PAUSE");
		return 0;
	}
	cout << "Ingrese la edad del paciente \n";
	cin >> edad;
	if (edad == 18)
	{
		cout << "Edad confimada \n";
	}
	else
	{
		cout << "Esta no es la edad correcta del paciente \n";
		system("PAUSE");
		return 0;
	}
	cout << "ingrese la enfermedad del paciente \n";
	cin >> enfermedad;
	if (enfermedad == "astigmatismo")
	{
		cout << "esta es la enfermedad correcta del paciente \n";
	}
	else
	{
		cout << "el paciente no posee esa enfermedad \n";
		system("PAUSE");
		return 0;
	}
	cout << "Ingrese el mes de naciemiento del paciente \n";
	cin >> mes_de_nacimiento;
	if (mes_de_nacimiento == "julio")
	{
		cout << "este es el mes correcto \n";
	}
	else
	{
		cout << "este no es el mes correcto \n";
		system("PAUSE");
		return 0;
	}
	cout << "ingrese el genero del paciente \n";
	cin >> genero;
	if (genero == "Masculino")
	{
		cout << "ese es el genero correcto!! \n";
	}
	else
	{
		cout << "este no es el genero correcto >:( \n";
		system("PAUSE");
		return 0;
	}
	cout << "ingrese la altura del paciente \n";
	cin >> altura;
	if (altura == 1.92)
	{
		cout << "esta es la altura correcta!! \n";
	}
	else
	{
		cout << "esta no es la altura correcta \n";
		system("PAUSE");
		return 0;
	}
	cout << "ingrese el nombre del padre del paciente \n";
	cin >> padre;
	if (padre == "Saul")
	{
		cout << "es el nombre correcto \n";
	}
	else
	{
		cout << "este no es el nombre del padre \n";
		system("PAUSE");
		return 0;
	}
	cout << "ingrese el nombre de la madre del paciente \n";
	cin >> madre;
	if (madre == "Olivia")
	{
		cout << "es el nombre correcto de la madre \n";
	}
	else

	{
		cout << "este no es el nombre de la madre del paciente \n";
		system("PAUSE");
		return 0;
	}
	cout << "ingrese si el paciente tiene alguna discapacidad \n";
	cin >> discapacidad;
	if (discapacidad == "ninguna")
	{
		cout << "el paciente no cuenta con una discapacidad \n";
	}
	else
	{
		cout << "la discapacidad no es la correcta \n";
		system("PAUSE");
		return 0;
	}
	cout << "ingrese el nivel de estudios que tiene el paciente \n";
	cin >> nivel_de_estudio;
	if (nivel_de_estudio == "preparatoria")
	{
		cout << "es el nivel correcto \n";

		cout << "Todos los datos son correctos"
	}
	else
	{
		cout << "este nivel no es correcto \n";
		system("PAUSE");
		return 0;
	}
}
