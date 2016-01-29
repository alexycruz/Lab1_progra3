#include <iostream>
#include <stdio.h>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;

unsigned long long int factorial(int x);
double div(int x);
double lados(double x1, double y1, double x2, double y2);
double diagonal(double x1, double y2, double x4, double y4);
double semiperimetro(double lado1, double lado2, double lado3);
double perimetro(double lado1, double lado2, double lado3);
double altura(double lado1, double lado2, double lado3, double semiperimetro);
double Area_trapezoide(double diagonal, double altura_triangulo1, double altura_triangulo2);

int main(int argc, char*argv[]){
	int opcion;
	int limite_fact;
	double x1, x2, x3, x4, y1, y2, y3, y4;
	double lado1_1, lado1_2, lado1_3, lado2_1, lado2_2, lado2_3;
	double semiperimetro1, semiperimetro2;
	double diagonal_usar;
	double altura_area;

	cout << "Ingrese el programa al que quiere ingresar: ";
	cout << endl;
	cout << "1.- Ejercicio 1(Funcion de factorial)" << endl;
	cout << "2.- Ejercicio 2(Trapezoide)" << endl;
	cin >> opcion;

	if (opcion == 1){
		cout << "Ingrese el numero x: " << endl;
		cin >> limite_fact;

		cout << div(limite_fact) + 1;
		cout << endl;
	}else if (opcion == 2){
		cout << "Ingrese x1: ";
		cin >> x1;
		cout << endl;
		cout << "Ingrese y1: ";
		cin >> y1;
		cout << endl;
		cout << "Ingrese x2: ";
		cin >> x2;
		cout << endl;
		cout << "Ingrese y2: ";
		cin >> y2;
		cout << endl;
		cout << "Ingrese x3: ";
		cin >> x3;
		cout << endl;
		cout << "Ingrese y3: ";
		cin >> y3;
		cout << endl;
		cout << "Ingrese x4: ";
		cin >> x4;
		cout << endl;
		cout << "Ingrese y4: ";
		cin >> y4;
		cout << endl;

		if (((x1 == x2) && (x1 == x3)) || ((y1 == y2) && (y1 == y3))){
			cout << "Lo siento, tus puntos forman una recta, no podemos continuar" << endl;
		}else if ((x1 == x2 && y1 == y2) || (x2 == x3 && y2 == y3) || (x3 == x1 && y3 == y1)){
			cout << "Tienes dos puntos iguales, no podemos continuar" << endl;
		}else{
		cout << "(" << x1 << "," << y1 << ")" << endl;
		cout << "(" << x2 << "," << y2 << ")" << endl;
		cout << "(" << x3 << "," << y3 << ")" << endl;
		cout << "(" << x3 << "," << y3 << ")" << endl;
		cout << endl;

		cout << "Los lados del trapezoide miden: " << endl;
		cout << "Lado 1: " << lados(x1, y1, x2, y2) << endl;
		cout << "Lado 2: " << lados(x1, y1, x3, y3) << endl;
		cout << "Lado 3: " << lados(x3, y3, x4, y4) << endl;
		cout << "Lado 4: " << lados(x2, y2, x4, y4) << endl;
		cout << endl;
		diagonal_usar = diagonal(x1, y1, x4, y4);

		cout << "Los lados del triangulo 1 miden: " << endl;
		cout << "Lado 1: " << lados(x1, y1, x3, y3) << endl;
		lado1_1 = lados(x1, y1, x3, y3);
		cout << "Lado 2: " << lados(x4, y4, x3, y3) << endl;
		lado1_2 = lados(x4, y4, x3, y3);
		cout << "Lado 3: " << lados(x1, y1, x4, y4) << endl;
		lado1_3 = lados(x1, y1, x4, y4);
		cout << endl;

		cout << "Los lados del triangulo 2 miden: " << endl;
		cout << "Lado 1: " << lados(x1, y1, x2, y2) << endl;
		lado2_1 = lados(x1, y1, x2, y2);
		cout << "Lado 2: " << lados(x2, y2, x4, y4) << endl;
		lado2_2 = lados(x2, y2, x4, y4);
		cout << "Lado 3: " << lados(x1, y1, x4, y4) << endl;
		lado2_3 = lados(x1, y1, x4, y4);
		cout << endl;

		cout << "semiperimetro del triangulo 1: " << semiperimetro(lado1_1, lado1_2, lado1_3) << endl;
		semiperimetro1 = semiperimetro(lado1_1, lado1_2, lado1_3);
		semiperimetro2 = semiperimetro(lado2_1, lado2_2, lado2_3);
		cout << "Semiperimetro del triangulo 2: " << semiperimetro(lado2_1, lado2_2, lado2_3) << endl;
		cout << "Perimetro del triangulo 1: " << perimetro(lado1_1, lado1_2, lado1_3) << endl;
		cout << "Perimetro del triangulo 2: " << perimetro(lado2_1, lado2_2, lado2_3) << endl;
		cout << endl;

		cout << "Las alturas del triangulo 1 miden: " << endl;
		cout << "Altura 1: " << endl;
		cout << "Altura 1: " << altura(lado1_1, lado1_2, lado1_3, semiperimetro1) << endl;
		cout << "Altura 2: " << altura(lado1_2, lado1_1, lado1_3, semiperimetro1) << endl;
		cout << "Altura 3: " << altura(lado1_3, lado1_1, lado1_2, semiperimetro1) << endl;
		altura_area = altura(lado1_3, lado1_1, lado1_2, semiperimetro1);
		cout << endl;

		cout << "Las alturas del triangulo 2 miden: " << endl;
		cout << "Altura 1: " << altura(lado2_1, lado2_2, lado2_3, semiperimetro2) << endl;
		cout << "Altura 2: " << altura(lado2_2, lado2_1, lado2_3, semiperimetro2) << endl;
		cout << "Altura 3: " << altura(lado2_3, lado2_1, lado2_2, semiperimetro2) << endl;
		cout << endl;

		cout << "El area del trapezoide es: " << Area_trapezoide(diagonal_usar, altura_area, altura_area) << endl;
		}


	}

	return 0;
}//fin del main

//metodos
unsigned long long int factorial(int x){
	unsigned long long int sum_acum = 1;
	for (int i = 1; i <= x; ++i){
		sum_acum = sum_acum * i;
	}

	return sum_acum;
}

double div(int x){
	double acum_total = 0;
	for (int i = 1; i < 22; i++){
		acum_total += (pow(x, i))/(factorial(i));
	}
	return acum_total;
}

double lados(double x1, double y1, double x2, double y2){
	double resp;
	resp = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	return resp;
}

double diagonal(double x1, double y1, double x4, double y4){
	double resp;
	resp = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
	return resp;
}

double semiperimetro(double lado1, double lado2, double lado3){
	double semiperimetro = (lado1 + lado2 + lado3)/2;

	return semiperimetro;
}

double perimetro(double lado1, double lado2, double lado3){
	double perimetro = (lado1 + lado2 + lado3);

	return perimetro;
}

double altura(double lado1, double lado2, double lado3, double semiperimetro){
	double resp;
	resp = (2/lado1)*(sqrt(semiperimetro*((semiperimetro - lado1)*(semiperimetro - lado2)*(semiperimetro - lado3))));

	return resp;
}

double Area_trapezoide(double diagonal, double altura_triangulo1, double altura_triangulo2){
	double resp;
	resp = ((diagonal * altura_triangulo1)/2 + (diagonal * altura_triangulo2)/2);

	return resp;
}
