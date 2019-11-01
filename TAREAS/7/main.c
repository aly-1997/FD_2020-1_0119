#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//En este programa se utiliza tres tipos de librerias
//Dos de ellas utilizadas anteriormente
//La libreria de math.h se utiliza debido a que utilizamos
//la funcion pow, la cual pertenece a esta libreria
int main (int argc, char *argv[]){
	int x,y,pot;
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	//Despues de haber convertido a los dos numeros en tipo entero
	//El primer parametro sera la base y el segundo parametro sera
	//la potencia a la que se eleva el primer numero
	pot=pow(x,y);
	printf("%i", pot);
	return 0;
}