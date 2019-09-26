// areacuadro.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
	//
#include <iostream>
#include <string>	


using namespace std;


int main()
{
	cout << "==========================================================================\n";
	cout << "||Bienvendio, este programa te permite calcular el area de un cuadrado.||\n";
	cout << "==========================================================================\n";
	float area;
	float lado;


	cout << "||Introduzca lado:                                                      ||\n";
	cin >> lado;


	area = lado * lado;


	cout << "||El area del cuadrado es: " << area << "                                          ||\n";
	cout << "==========================================================================\n";


	return 0;
}



