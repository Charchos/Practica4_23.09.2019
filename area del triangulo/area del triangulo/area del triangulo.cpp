// area del triangulo.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "==========================================================================\n";
	cout << "||Bienvendio, este programa te permite calcular el area de un triangulo.||\n";
	cout << "==========================================================================\n";

	float altura, area, base;

	cout << "||Introduzca base:                                                      ||\n";
	cin >> base;
	cout << "||Introduzca altura:                                                    ||\n";
	cin >> altura;

	area = base * altura / 2;

	cout << "||El area del triangulo es: " << area << "                                          ||\n";
	cout << "==========================================================================\n";

	return 0;
}


