#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Utilizo la libreria math.h debido a que voy a ocupar la funcion sqrt para la raiz y el valor fabs para el valor absoluto
//Utilizo el prototipo de la funcion para definirla despues de la funcion principal.
//Utilizo una funcion de tipo void que no me regresa algun valor si no que en ella se imprima el resultado
void CUADRATICA(double, double, double);
int main(int argc, char *argv[]){
	double a,b,c;
	a=atof(argv[1]);
	b=atof(argv[2]);
	c=atof(argv[3]);
	//La funcion recibe tres parametros de entrada
	CUADRATICA(a,b,c);
	return 0;
}
//En la funcion habra tres condiciones, las  cuales tienen que ver con el determinante
//Si se cumple alguna de las condiciones entonces se imprime el valor de la operacion definida en cada condicion
void CUADRATICA(double x, double y, double z){
	double res, r1, r2, im1, im2, det;
	det=((y*y)-(4*x*z));
	//Esta condicion indica que solo habra un resultado
	if(det==0){
		res=-y/(2*x);
		printf("%.2lf\n", res);
	}
	//Esta condicion indica que hay dos resultados los cuales son reales
	if(det>0){
		r1=(-y+sqrt(det))/(2*x);
		r2=(-y-sqrt(det))/(2*x);
		printf("%.2lf\n", r1);
		printf("%.2lf\n", r2);
	}
	//Esta condicion indica que hay dos soluciones las cuales tienen parte imaginaria
	if(det<0){
		r1=-y/(2*x);
		r2=-y/(2*x);
		im1=(sqrt(fabs(det)))/(2*x);
		im2=(sqrt(fabs(det)))/(2*x);
		printf("%.2lf + %.2lf i\n", r1, im1);
		printf("%.2lf - %.2lf i\n", r2, im2);
	}
}