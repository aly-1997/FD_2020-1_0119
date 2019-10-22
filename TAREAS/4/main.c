#include <stdlib.h>
#include <stdio.h>
//Este programa recibe una cantidad indefinida de numero como parametros de entrada
int main(int argc, char *argv[]){
	double prom, x, res;
	int i;
	res=0;
	//Los parametros de entrada entrar a un ciclo for para sumarse.
	//El resultado de esa suma se guarda en una variable.
	for(i=1; i<argc; i++){
		x=atof(argv[i]);
		res= (res+x);
	}
	//La variable que acumula es dividida entre el numero de argumentos de entrada menos uno.
	//Es menos uno debido a que consideramos que ./nombre_programa es el primer argumento.
	prom = (res/(argc-1));
	printf("%.2f\n", prom);
	return 0;
}