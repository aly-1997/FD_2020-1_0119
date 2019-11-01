#include <stdio.h>
#include <stdlib.h>
//En este programa se utiliza un ciclo de iteracion para crear la potencia
//Dado que la potencia es la multiplicacion de un numero n veces
int main (int argc, char *argv[]){
	int x,y,pot;
	pot=1;
	x=atoi(argv[1]);
	y=atoi(argv[2]);
	while(y>0){
		pot=x*pot;
		y--;
	}
	//Despues de haber convertido a los dos numeros en tipo entero
	//El primer parametro sera la base y el segundo parametro sera
	//la potencia a la que se eleva el primer parametro
	//Esto indica el primer numero sera multiplicado tantas veces 
	//como el segundo numero indique.
	printf("%i", pot);
	return 0;
}