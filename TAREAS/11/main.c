#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Dado que haremos uso de la funcion absoluto, incluiremos la libreria de math.h
//utilizo un prototipo de la funcion RAIZ para estructurarla despues de mi funcion principal
double RAIZ(double, double, double);

int main(int argc, char *argv[]){
	double n, tol, cand, res;
	n = atof(argv[1]);
	tol = atof(argv[2]);
	cand = atof(argv[3]);
	//El valor devuelto por la funcion RAIZ sera guardada dentro de la variable res, la cual sera la que se imprima
	res=RAIZ(n,tol,cand);
	printf("%lf", res);
    return 0;
}
//La funcion RAIZ recibe tres numeros de entrada
//Estos tres numeros de entrada son: numero a sacar la raiz, tolerancia dada por el usuario y un numero el cual va a ser el primer divisor
//Dentro de la funcion se hara uso de otras tres variables, las cuales nos ayudara a hacer las operaciones necesarias.
//Tambien haremos uso de la funcion de valor absoluto (fabs) el cual es para tipo float
//El unico valor que no cambia durante todo el proceso sera el numero a sacar la raiz
double RAIZ(double x, double y, double z){
	double div,dif,prom;
	    div = (x/z);
		dif = fabs(div-z);
	while(dif >= y){
		div = (x/z);
		dif = fabs(div-z);
		prom=((z+div)/2);
		z=prom;
	}
	return z;
}
//Cuando se cumple la condicion de que el diferencia entre el numero divisor y el valor de z sea igual a la tolerancia
//entonces se detiene el ciclo y el ultimo valor guardado en z es el que regresa
//El algoritmo que representa la funcion RAIZ se le conoce como el metodo de la biparticion