#include <stdio.h>
#include <string.h>
//Utilizamos la funcion de void que utilice los argumentos de entrada
//Dentro de la funcion void introducimos un switch 
//para cada uno de los casos de los argumentos de entrada
void casos(char argv[]){
	int i;
	switch (argv[i]){
		case '2':
		printf("2\n");
		break;
		case '3':
		printf("3\n");
		break;
		case '4':
		printf("4\n");
		break;
		case '5':
		printf("5\n");
		break;
		case '6':
		printf("6\n");
		break;
		case '7':
		printf("7\n");
		break;
		case '8':
		printf("8\n");
		break;
		case '9':
		printf("9\n");
		break;
		case 'J': case 'Q': case 'K':
		printf("10\n");
		break;
		case 'A':
		printf("11\n");
		break;
	}
	//En el caso del argumento de entrada 10
	//El programa reconoce al 10 como dos caracteres separados
	//Por lo que no lo pude meter a switch.
	if(argv[i]=='1'||argv[i]=='0'){
		printf("10\n");
	}
}
int main(int argc, char *argv[]){
	//Finalmente ejecutamos el programa bajo un ciclo for
	//Y llamamos a la funcion void casos
	for(int i=1; i<argc; i++){
		casos(argv[i]);
	}
	return 0;
}