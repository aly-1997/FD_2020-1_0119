#include <stdlib.h>
#include <stdio.h>
double SUMA(double x, double y){
	double z;
	z = x + y;
	return z;
}
double RESTA(double x, double y){
	double z;
	z = x - y;
	return z;
}
double MULTI(double x, double y){
	double z;
	z = x*y;
	return z;
}
double DIV(double x, double y){
	double z;
	z = x/y;
	return z;
}
int main(int argc, char *argv[]){
	double n1, n2, suma, resta, mult, div;
	n1 = atof(argv[1]);
	n2 = atof(argv[2]);
	suma = SUMA(n1, n2);
	printf("%.2f\n", suma);
	resta = RESTA(n1, n2);
	printf("%.2f\n", resta);
	mult = MULTI(n1, n2);
	printf("%.2f\n", mult);
	div = DIV(n1, n2);
	printf("%.2f\n", div);
	return 0;
}