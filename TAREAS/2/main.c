#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){

	int num;

	num = atoi(argv[1]);
	
	if(num%2 == 0){
		printf("%i",1);
	}
	else
		printf("%i",0);
	return 0;
}

