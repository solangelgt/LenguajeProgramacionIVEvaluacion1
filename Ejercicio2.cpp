/*Tercera evaluacion de lenguaje de programación 4 Solangel Rodríguez*/
#include <iostream>
#include <stdio.h>



using namespace std;

int main(){
	
	/*Definición de variables*/
	int numero;
	bool par;

	/*Lectura de datos*/
	cout << "Ingrese el numero: " << endl;
	cin  >> numero;

	/*Cálculos*/
	par=true;
	if(numero % 2) par=false;
	
	/*Resultados*/
	if(par) cout << "El numero " << numero << " es par" << endl;
	else cout << "El numero " << numero << " es impar" << endl;

	system("pause");
	
	return 0;
	
}