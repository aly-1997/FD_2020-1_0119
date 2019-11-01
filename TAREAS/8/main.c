#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	//Para este programa se utiliza el tipo de variable double
	//Dado que en las operaciones el resultado sera de tipo real
	double x,y,temp;
	x=atof(argv[1]);
	y=atof(argv[2]);
	//El primer parametro de entrada sera el que indique 
	//que es lo que se desea hacer.
	//Para el numero 0 sera de grados °C a °F
	//Para el numero 1 sera de grados °F a °C
	//El segundo parametro de entrada sera el numero a convertir
	if(x==0){
		temp=(1.8*y)+32;
		printf("%.2lf", temp);
	}
	if(x==1){
		temp=(y-32)/1.8;
		printf("%.2lf", temp);
	}
	//Cuando se cumple alguna de las condiciones entonces
	//Se imprimira el resultado correspondiente
	return 0;
}