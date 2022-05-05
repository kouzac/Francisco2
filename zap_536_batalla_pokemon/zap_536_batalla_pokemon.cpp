// zap_536_batalla_pokemon.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
bool otravez = true;
int main()
{
	do
	{
		string ataque = "Golpe mortifero y defenderse";
		int pokemon;
		int ryhp = 500;
		int rydefense = 500;
		int ryatk = 500;
		int ryvel = 500;
		int mahp = 10;
		int madefense = 8;
		int maAtk = 9;
		int mavel = 4;
		int arhp = 500;
		int ardefense = 510;
		int aratk = 450;
		int arvel = 550;
		int hit;
		cout << "hola este es el mundo pokemon \n";
		cin.get();
		cout << "por favor escoge un pokemon para tu combate \n";
		cin.get();
		cout << "Por cierto si en algun punto los dos pokemons en combate caen contara como una derrota igual \n";
		cout << "Asegurate de no dejar que tu pokemon sea derrotado \n";
		cin.get();
		cout << "use 0 para raykuasa \n";
		cout << "use 1 para magikarp \n";
		cout << "use 2 para arceus \n";
		cin >> pokemon;
		switch (pokemon)
		{
		case 0:
			cout << "Raykuaza se ha unido a su equipo\n";
			cout << "revise sus estadisticas \n";
			cout << "HP: " << ryhp << endl << "ataque: " << ryatk << endl << "defensa: " <<
				rydefense << endl << "velocidad: " << ryvel << endl << "ataques: " << ataque << endl;
			cout << "un rival te reta a un du du du duelo \n";
			while (ryhp >= 0 && arhp >= 0)
			{
				cout << "Eliga si atacar (0) o defenderse (1) \n";
				cin >> hit;
				switch (hit) {
				case 0:
					cout << "rykuaza ataco a arceus \n";
					arhp -= 60;
					cout << "El hp de arceus es: " << arhp << endl;
					cout << "arceus te ataca!! \n";
					ryhp -= 58;
					cout << "tu hp es: " << ryhp << endl;
					break;
				case 1:
					cout << "rykuaza se defendio y regenero\n";
					cout << "tu hp es: " << ryhp + 600 << endl;
					cout << "arceus ataca!!! \n";
					ryhp -= 5;
					cout << "tu hp es: " << ryhp << endl;
					cout << "como no atacaste el enemigo se regenero \n";
					cout << "el hp de arceus es " << arhp + 10 << endl;
					break;
				default:
					cout << "el valor introducido no es valido \n";
				}
			}
			if (ryhp <= 0) {
				cout << "has perdido la batalla \n";
				if (ryhp > arhp) {
					cout << "pero ganas por tener mas hp que el oponente \n";
				}
				else {
					cout << "perdiste completamente \n";
				}
			}
			else {
				cout << "tu pokemon ha vencido \n";
			}
			break;
		case 1:
			cout << "Magikarp se ha unido a su equipo\n";
			cout << "revise sus estadisticas \n";
			cout << "HP: " << mahp << endl << "ataque: " << maAtk << endl << "defensa: " <<
				madefense << endl << "velocidad: " << mavel << endl << "ataques:" << ataque << endl;
			cout << "un rival te reta a un du du du duelo \n";
			while (mahp >= 0 && ryhp >= 0)
			{
				cout << "Eliga si atacar (0) o defenderse (1) \n";
				cin >> hit;
				switch (hit) {
				case 0:
					cout << "magikarp ataco a raykuaza \n";
					ryhp -= 1;
					cout << "El hp de rykuaza es: " << ryhp << endl;
					cout << "arceus te ataca!! \n";
					mahp -= 444;
					cout << "tu hp es: " << mahp << endl;
					break;
				case 1:
					cout << "magikarp se defendio \n";
					cout << "raykuaza ataca!!! \n";
					mahp -= 222;
					cout << "tu hp es: " << mahp << endl;
					break;
				default:
					cout << "el valor introducido no es valido \n";
				}
			}
			if (mahp <= 0) {
				cout << "has perdido la batalla \n";
			}
			else {
				cout << "tu pokemon ha vencido \n";
			}
			break;
		case 2:
			cout << "arceus se ha unido a su equipo\n";
			cout << "revise sus estadisticas \n";
			cout << "HP: " << arhp << endl << "ataque: " << aratk << endl << "defensa: " <<
				ardefense << endl << "velocidad: " << arvel << endl << "ataques: " << ataque << endl;
			cout << "un rival te reta a un du du du duelo \n";
			while (arhp >= 0 && ryhp >= 0)
			{
				cout << "Eliga si atacar (0) o defenderse (1) \n";
				cin >> hit;
				switch (hit) {
				case 0:
					cout << "arceus ataco a raykuaza \n";
					ryhp -= 54;
					cout << "El hp de rykuaza es: " << ryhp << endl;
					cout << "raykuaza te ataca!! \n";
					arhp -= 40;
					cout << "tu hp es: " << arhp << endl;
					break;
				case 1:
					cout << "arceus se defendio y regenero \n";
					cout << "raykuaza ataca!!! \n";
					arhp -= 7;
					cout << "tu hp es: " << arhp + 30 << endl;
					cout << "como no atacaste el enemigo se regenero un poco \n";
					cout << "el hp de raykuaza es: " << ryhp + 5 << endl;
					break;
				default:
					cout << "el valor introducido no es valido \n";
				}
			}
			if (arhp <= 0) {
				cout << "has perdido la batalla \n";
			}
			else {
				cout << "tu pokemon ha vencido \n";
			}
			break;
		default:
			cout << "use un valor valido porfavor \n";
		}
		cout << "¿Quiere salir? \n";
		cout << "0 para no \n";
		cout << "1 para si \n";
		cin >> otravez;
	} while (otravez == 0);
}