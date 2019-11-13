#include <stdio.h>
#include <stdlib.h>
//Utilizamos un prototipo de la funcion SALUDO, el cual es la declaracion de la funcion SALUDO
//Esto permite declarar la funcion y llamarla dentro la funcion principal, para despues poderla definir 
int SALUDO(int);
int main(int argc, char *argv[]){
	int personas, saludos;
	personas=atoi(argv[1]);
	//Llamamos a la funcion SALUDO y guardamos su valor en la variable saludos el cual es es que se imprime
	saludos=SALUDO(personas);
	printf("%i", saludos);
	return 0;
}
//En la fucion SALUDO entra el numero de personas ingresada por el usuario 
//La funcion SALUDO es una funcion recursiva, donde el caso base es un dato conocido
//El dato conocido es: cuando hay solo una persona el numero de saludos sera cero.
int SALUDO(int x){
	if(x==1){
		return 0;
	}
	return SALUDO(x-1)+(x-1);
}
//Cuando hacemos uso de la funcion SALUDO dentro de esta misma funcion el caso cambia
//Ahora el caso es el numero de personas menos uno más el resultado de la operacion anterior menos uno.
//Cuando la funcion llega al caso base entonces es cuando empieza a ejecutarse y finalmente regresar un valor