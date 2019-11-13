#include <stdio.h>
#include <stdlib.h>
//Utilizo los prototipos de la funciones que voy a utilizar dentro de mi funcion principal
//Para ordenar los numeros de menor a mayor hare uso de tres funciones 
void imprimir(int x[], int y);
void intercambio(int *a,int *b);
void ordenar(int c[], int d);
int main(int argc, char *argv[]){
	int n[argc-1];
	//Este ciclo for nos ayuda a guardar los argumentos de entrada en una arreglo unidimension de longitud argc.
	for(int i=0; i<argc; i++){
		n[i]=atoi(argv[i]);
	}
	ordenar(n,argc);
	imprimir(n,argc);
	return 0;
}
//Por ultimo esta funcion imprimira lo que se ha guardado en nuestra lista, es decir, a los numeros en orden
//De menor a mayor
void imprimir(int x[],int y){
	for(int i=1; i<y;i++){
		printf("%i\n",x[i]);
	}
}
//Para hacer el intercambio de dos valores, se necesita utilizar una tercera variable auxiliar  que contenga el resultado inmediato
//Esta funcion sirve para intercambiar dos elementos a y b que se pasan a ella. Al tener que pasar por referencia, los argumentos 
//de la funcion son punteros.
void intercambio(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b =aux;
}
//Esta funcion va a ordenar nuestros numeros contenidos en el arreglo
//Dentro de esta funcion se llamara a la funcion de intercambio
void ordenar(int x[], int y){
	for(int i=y-1; i>0; i--){
		for(int j=0; j<i; j++){
			if(x[j]>x[j+1]){
				intercambio(&x[j],&x[j+1]);
			}
		}
	}
}
//Para realizar este programa se utiliza el algoritmo de la burbuja, el cual es un metodo de ordenacion muy simple, el cual consiste en lo siguiente:
//Se compara cada elemento del arreglo con el siguiente (por parejas), si no estan en el orden correcto, se intercambian entre sí sus valores.
//El valor mas pequeño flota hasta la parte superior del arreglo como si fuera una burbuja en un vaso de refresco con gas. 