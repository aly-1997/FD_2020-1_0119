#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[]){
	double prom, x, res;
	int i;
	res=0;
	for(i=1; i<argc; i++){
		x=atof(argv[i]);
		res= (res+x);
	}
	prom = (res/(argc-1));
	printf("%.2f\n", prom);
	return 0;
}