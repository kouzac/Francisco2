// 31_05_2022_zap536_Francisco_Robles_Objetos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Francisco Gerardo Robles De Jesús :v
//Objetos

#include <iostream>
using namespace std;
/*
enum inventario {nada, arma_larga, arma_corta, granada};
enum inventario_ammo 
{
    ammo_nada,
    ammo_larga,
    ammo_corta,
    ammo_granda
};
struct persona
{
    string nombre;
    int vida;
    int ataque;
    bool escudo;
    string skin[5] = { "Normal", "halloween", "Epica", "Mexa", "Navidad"};
    string inventario;
    string armas[5] = { "cuchillo, pistola, rifle, granda, bazuka" };
};
/*int main()
{
    /*
    inventario arma1 = arma_larga;
    inventario arma2 = arma_corta;
    inventario especial = granada;
    inventario_ammo balas = ammo_larga;

    bool disparo;
    cout << "¿Quieres disparar? \n" << "si = 1 \n" << "no = 0 \n";
    cin >> disparo;

    if (disparo)
    {
        cout << "disparo activado \n";
        if (arma1 == arma_larga && balas == ammo_larga)
        {
            cout << "ejecutaste un disparo \n";
            cout << "arma 1: " << arma1 << endl;
            cout << "balas: " << balas << endl;
        }
        if (arma2 == arma_corta && balas == ammo_corta)
        {
            cout << "ejecutaste un ataque con el arma corta \n";
        }
    }

}
void main()
{
    persona Cris;
    Cris.nombre = "Cristina Valentine";
    Cris.vida = 100;
    Cris.ataque = 50;
    Cris.escudo = false;
    Cris.skin[3];
    Cris.inventario = "Nivel 2";
    Cris.armas[3];


}
*/

class nodo
{
public:
    int edad;
    nodo* next;

};
int imprimir(nodo* n)
{
    //para imprimir
    while (n != NULL)
    {
        cout << n->edad << "" << endl;
        n = n->next;
    }
    return 0;
}
void main()
{
    nodo* cabeza = NULL;
    nodo* cuello = NULL;
    nodo* torso = NULL;
    nodo* piernas = NULL;
    nodo* pies = NULL;

    cabeza = new nodo();
    cuello = new nodo();
    torso = new nodo();
    piernas = new nodo();
    pies = new nodo();

    cabeza->edad = 15;
    cabeza->next = cuello;

    cuello->edad = 1555;
    cuello->next = torso;

    torso->edad = 200;
    torso->next = piernas;

    piernas->edad = 65;
    piernas->next = pies;

    pies->edad = 785;
    pies->next = NULL;

    imprimir(cabeza);
}

