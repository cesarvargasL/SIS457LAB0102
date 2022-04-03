#include <iostream>
using namespace std;

int main()
{
	string s ="s";
	string v = "v";
	string res ="";
	cout << "Mi nombre es Cesar Luis Vargas Lezano, naci en el departamento de Chuquisaca - Bolivia, provincia Sucre, el 18 de abril del 2003." 
		"Estudie el nivel inicial en el kinder Agar S. de Cox de mi ciudad, continue con la primaria en la escuela Agustin Iturricha," 
		"culmine mis estudios secundarios en el colegio Jaime de Zudanez, a los 16 años ,proponiendome asi continuar con mis estudios profesionales "
		"para servir a las necesidades de mi pais."<< endl;
	cout << "Actualmente tengo 19 años y me encuentro estudiando en la `Universidad Mayor Real y  Pontificia de San Francisco Xavier de Chuquisaca`" 
		"ingrese el año 2021, estoy cursando la carrera de Ingenieria de Sistemas en su tercer semestre, siempre con los objetivos claros e inclinando mi formacion profesional al area tecnologica "
		"siguiendo mis aspiraciones personales de terminar la carrera con un buen aprendizaje. "<< endl;
	cout << "Soy una persona un tanto timida , me gusta mucho leer,jugar videojuegos,  jugar futbol, escuchar musica, teatro, la fotografia, me considero una persona generosa porque me gusta ayudar a los demas en todo lo que este a mi alcance"
		" me dedico enteramente a estudiar y ayudar a mis padres en el negocio familiar cumpliendo siempre los deberes que tengo como hijo, siempre le pongo ganas e interes a todo lo que hago "
		"algo que destaca mucho en mi persona, espero terminar la carrera sin ningun problema teniendo en cuenta siempre todo aquello que puede presentarse en momentos dados, pero con valentia y sabiduria sabre manejar "
		"dichas situaciones."<< endl;
	cout << endl;
	cout << "Biografia de Cesar Luis Vargas Lezano" << endl;
	cout << endl;
	cout << "Presione (v) para imprimir la biografia nuevamente." << endl;
	cout << endl;
	cout << "Presione (s) para salir del programa." << endl;
	cin >> res;
	cout << endl;
	if (res == s) {
		cout << "¡Gracias! por usar el programa." << endl;
	}
	else {
		cout << "Usted eligio una opcion erronea (no mencionada), el programa cierra automaticamente" << endl;
	}
 while (res ==v) {
	 cout << "hola uwu" << endl;
	 cout << "Presione (v) para imprimir la biografia nuevamente." << endl;
	 cout << endl;
	 cout << "Presione (s) para salir del programa." << endl;
	 cin >> res;
	 cout << endl;
	 if (res == s) {
		 cout << "¡Gracias! por usar el programa." << endl;
	 }
	 else {
		 cout << "Usted eligio una opcion erronea (no mencionada), el programa cierra automaticamente" << endl;
	 }
 }

return 0;
}

