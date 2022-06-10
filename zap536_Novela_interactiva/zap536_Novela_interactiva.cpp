// zap536_Novela_interactiva.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Francisco Gerardo Robles De Jesús

#include <iostream>
using namespace std;
bool otravez = true;

int main()
{
	int eleccion;
	cout << "Hola vienvenido a esta historia " << endl << "--------------------------------------" << endl;
	cout << "te levantas para ir a la escuela, pero ya vas tarde, desayunaras o no?" << endl << "usa 0 para si" << endl;
	cout << "usa 1 para no " << endl << "usa 2 para desayunar algo de camino " << endl;
	cin >> eleccion;
	switch (eleccion)
	{
	case 0:
		cout << "te haces un haces un desayuno pero llegas un poco tarde a clase" << endl;
		cout << "por llegar tarde el profesor te da un ejercicio mas complicado que a los demas, que haces? " << endl;
		cout << "con 0 le pides ayuda a un compañero " << endl;
		cout << "con 1 lo haces tu solo " << endl;
		cout << "con 2 no lo haces y te vas del salon sin que el profe te vea " << endl;
		cin >> eleccion;
		switch (eleccion)
		{
		case 0:
			cout << "con la ayuda de un amigo logras acabar el trabajo con buena calificacion" << endl;
			cout << " te preguntan tus amigos si quieres salir a algun lado " << endl;
			cout << "usa 0 para decirles que no gracias" << endl;
			cout << "usa 1 para decirles que si" << endl;
			cin >> eleccion;
			switch (eleccion)
			{
			case 0:
				cout << "Les dices que no y vuelves a tu casa" << endl;
				cout << "De camino a casa te encuentras con un perro callejero" << endl;
				cout << "Usa 0 para llevarlo a casa" << endl;
				cout << "Usa 1 para ignorarlo" << endl;
				cin >> eleccion;
				switch (eleccion)
				{
				case 0:
					cout << "lo llevas a casa y lo nombras pipo";
					cout << "se vuelve tu mejor compañero" << endl;
					cout << "despues de un tiempo pipo enferma gravemente" << endl;
					cout << "el veterinario recomienda sacrificarlo para que no sufra " << endl;
					cout << "con mucho dolor debes dejar ir a tu amigo, pasando unos ultimos momentos a su lado" << endl;
					cout << "--PIPO FINAL--" << endl;
					break;
				case 1:
					cout << "Dejas al perro y te vas a tu casa" << endl;
					cout << "Cuando llegas a tu casa del cansancio duermes un poco" << endl;
					cout << "Pero te despierta un ruido muy fuerte y esque hubo un accidente enfrente de tu casa" << endl;
					cout << "sales a ver y observas que hay un niño dentro de uno de los carros y que no puede salir" << endl;
					cout << "vas a ayudarlo y logras sacarlo si casi ningun daño" << endl;
					cout << "Eres reconocido como un heroe en tu comunidad y te vuelves alguien famoso" << endl;
					cout << "--FINAL HEROICO--" << endl;
					break;
				}
				break;
			case 1:
				cout << "Te vas con ellos y terminan encontrandose con dios" << endl;
				cout << "Como este los clasifica como gente impura los elimina de la existencia" << endl;
				cout << "--FIN--" << endl << ":)" << endl;
				break;
			}
			break;
		case 1:
			cout << "decides hacer el trabajo solo, pero como es muy dificil no lo haces bien" << endl;
			cout << "por culpa de eso el profesor te castiga con dejarte un tiempo extra en la escuela como castigo" << endl;
			cout << "durante tu estadia en la sala de detencion te encuentras con un fantasma" << endl;
			cout << "Este te acorrala y termina llevandose tu alma dejandote en un limbo enterno" << endl;
			cout << "--Fin--" << endl;
			break;
		case 2:
			cout << "Decides que es mejor escaparte de clase y volver a casa mientras el profe se descuidaba" << endl;
			cout << "Durante tu camino a casa te encuentras con tu peor pesadilla" << endl;
			cout << "Escuchas una voz familiar decirte: que bonito" << endl;
			cout << "te volteas y vez a tu mamá muy enojada" << endl;
			cout << "Nunca mas se volvio a saber de ti" << endl;
			cout << "--FINAL MADRE--" << endl;
			break;
		}
		break;
	case 1:
		cout << "Te vas sin desayunar pero gracias a eso llegas temprano a clase " << endl;
		cout << "Fue un dia normal de escuela asi que despues de clase tus amigos te preguntan si quieres ir algun lado" << endl;
		cout << "Usa 0 para invitarlos a comer a tu casa" << endl;
		cout << "Usa 1 para decir que si y que ellos decidan" << endl;
		cout << "Usa 2 para decir que mejor otro dia" << endl;
		cin >> eleccion;
		switch (eleccion)
		{
		case 0:
			cout << "invitas a tus amigos a tu casa a comer y despues de un tiempo notas que una serpiente se metio a la casa" << endl;
			cout << "todos se asustan, pero como tu mamá no crio un cobarde la matas con un tenedor y cuchillo" << endl;
			cout << "Quedas como un heroe entre tus amigos y esto se vuelve una anecdota divertida entre ustedes" << endl;
			cout << "--Fin--" << endl;
			break;
		case 1:
			cout << "Tus amigos y tu van a un cine para ver una pelicula" << endl;
			cout << "Durante la funcion sorpreseivamente una bala perdida cae en la sala justo en tu asiento" << endl;
			cout << "pero como justo te moviste para recoger algo que se te cayo y no te dio" << endl;
			cout << "te das cuenta de la bala tiempo despues y avisas al personal" << endl;
			cout << "Regresas a tu casa con esa anecdota y siendo un dia muy raro" << endl;
			cout << "Final normal" << endl;
			break;
		case 2:
			cout << "le dices a tus amigos que estas muy cansado y que mejor sera otro dia" << endl;
			cout << "de camino a casa debido a que no desayunaste y al esfuerzo de ir corriendo a la escuela" << endl;
			cout << "te desmayas de camino a casa y cuando despiertas estas en una nave alienigena" << endl;
			cout << "fuiste secuestrado por aliens y ahora no podras volver nunca a casa" << endl;
			cout << "--Fin--" << endl << "0_0" << endl;
			break;
		}
		break;
	case 2:
		cout << "agarras algo del refi y sales corriendo comiendo apurado" << endl;
		cout << "Por ir comiendo a prisas te atragantas con la comida y por eso te caes, te golpeas la cabeza" << endl;
		cout << "y te mueres" << endl;
		cout << "----fin---" << endl;
		cout << ":)";
		break;
	default:
		cout << "introduce un valor valido";
	}
	
}
