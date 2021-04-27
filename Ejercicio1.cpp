/*Tercera evaluacion de lenguaje de programación 4 Solangel Rodríguez*/
#include <iostream>
#include <stdio.h>



using namespace std;

int main(){
	
	/*Definición de variables*/
	int costo_carrera, inicial, c;
	double cuota_mensual;

	/*Lectura de datos*/
	cout << "Ingrese el costo de la carrera: " << endl;
	cin  >> costo_carrera;

	/*Cálculos*/
	inicial = 0.20*costo_carrera;
	cuota_mensual = 0.80*costo_carrera/36;

	/*Resultados*/
	cout << "la inicial es: " << inicial << " Bs" << endl;

	cout << "la cuota mensual es: " << cuota_mensual << " Bs" << endl;

	system("pause");
	

	return 0;
	
}