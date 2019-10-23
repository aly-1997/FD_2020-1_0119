#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int x,y,z;
	z=1;
	//utilzamos un ciclo para recorrer la lista de argumentos de entrada.
	//y guardamos el resultado en una variable.
	for(int i=1; i<argc; i++){
		x=atoi(argv [i]);
		//Para hacer la multiplicacion de los argumentos de entrada
		//pero sin incluir el valor en la posicion en que nos encontramos
		//condicionamos a las variable de posicion a ser mayores
		//o menores que esta. Y el resultado de la multiplicacion
		//lo guardamos en una variable acumulativa
		for(int j=1; j<argc; j++){
			y= atoi(argv[j]);
			if(i < j || i > j){
				z=z*y;
			}
		}
		printf("%i\n", z);
		//Despues de imprimir el valor resultante
		//reiniciamos la variable acumulativa
		z=1;
	}
	return 0;
}