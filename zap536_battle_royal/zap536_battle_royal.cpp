// zap536_battle_royal.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
struct persona
{
    string nombre;
    int vida;
    int ataque;
    bool defensa;
    int special;
};
int main()
{
    srand(time(NULL));
    persona francisco;
    francisco.nombre = "Francisco";
    francisco.ataque = rand() % 10;
    francisco.vida = rand() % 10;
    francisco.defensa = rand() % 10;
    francisco.special = francisco.ataque + rand() % 10;

    persona manuel;
    manuel.nombre = "Manuel";
    manuel.ataque = rand() % 10;
    manuel.vida = rand() % 10;
    manuel.defensa = rand() % 10;
    manuel.special = manuel.ataque + rand() % 10;

    persona cris;
    cris.nombre = "Cristina";
    cris.ataque = rand() % 10;
    cris.vida = rand() % 10;
    cris.defensa = rand() % 10;
    cris.special = cris.ataque + rand() % 10;

    persona veracruzano;
    veracruzano.nombre = "Cangrejo";
    veracruzano.ataque = rand() % 10;
    veracruzano.defensa = rand() % 10;
    veracruzano.vida = rand() % 10;
    veracruzano.special = veracruzano.ataque + rand() % 10;

    cout << "bienvenido al battle royal del salon \n";
    cout << "Aca pelearan Francisco, Manuel, Cristina y un cangrejo \n";

    cout << "Stats de Francisco \n";
    cout << "Ataque = " << francisco.ataque << endl << "Defensa = " << francisco.defensa << endl << "vida = " << francisco.vida << endl;

}

