#include <stdio.h>
#include <stdlib.h>
//Hacemos uso del prototipo de la funcion DIGITO, lo cual me permite declararla
//y llamarla dentro de mi funcion principal, para despues definirla.
int DIGITO(int);
int main(int argc, char *argv[]){
	int num, res;
	num=atoi(argv[1]);
	//Llamamos a la funcion DIGITO y guardamos el valor regresado en la variable res
	res= DIGITO(num);
	printf("%i", res);
	return 0;
}
//En la funcion DIGITO entra el numero ingresado por el usuario
int DIGITO(int x){
	//Utilizamos una variable que guarde cada uno de los digitos y los vaya sumando
	int cuenta=0;
	while(x!=0){
		//Para obtener cada uno de estos digitos lo divimos entre 10 y nos fijamos en el residuo
		//para ello ocupamos la funcion de modulo
		cuenta=cuenta+(x%10);
		//Para que el valor de nuestro numero vaya cambiando y podamos hacer este mismo proceso 
		//y obtener los demas digitos, se hara una division entre 10 y, dado que estamos 
		//trabajando con numero de tipo entero el resultado de la division devolvera a la variable 
		//un numero entero.
		x=(x/10);
	}
	return cuenta;
}
//Cuando el valor de el numero sea igual a cero entonces el proceso de while se detiene,
//y el ultimo valor guardado en cuenta es el que regresa y se guarda en la variable de nuestra funcion principal.
