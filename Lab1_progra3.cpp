#include <iostream>
#include <stdio.h>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

int factorial(int x);
double div(int x);

int main(int argc, char*argv[]){
	int opcion;
	int limite_fact;

	cout << "Ingrese el programa al que quiere ingresar: ";
	cout << endl;
	cout << "1.- Ejercicio 1(Funcion de factorial)" << endl;
	cout << "2.- Ejercicio 2(Trapezoide)" << endl;
	cin >> opcion;

	if (opcion == 1){
		cout << "Ingrese el numero x: " << endl;
		cin >> limite_fact;

		cout << div(limite_fact) + 1;
	}else if (){
	
	}

	return 0;
}//fin del main

//metodos
int factorial(int x){
	int sum_acum = 1;
	for (int i = 1; i <= x; ++i){
		sum_acum = sum_acum * i;
	}

	return sum_acum;
}

double div(int x){
	double acum_total = 0;
	for (int i = 1; i < 16; i++){
		acum_total += (pow(x, i))/(factorial(i));
	}
	return acum_total;
}
