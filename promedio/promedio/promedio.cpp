// promedio.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<string>
using namespace std;

int main()
{
	float acum;
	float dato;
	float i;
	float n;
	float prom;
	cout << "Ingrese la cantidad de calificaciones:" << endl;
	cin >> n;
	acum = 0;
	for (i = 1; i <= n; i++) {
		cout << "Ingrese la calificacion " << i << ":" << endl;
		cin >> dato;
		acum = acum + dato;
	}
	prom = acum / n;
	cout << "El promedio es: " << prom << endl;
	return 0;
}