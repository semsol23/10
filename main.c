#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i = 300;
	
	int *pi = &i;
	char *pc = &i; /*가장 아래쪽 바이트가 44*/ 
	
	printf("%i %i %i\n", i, *pi, *pc); 
	
	return 0;
}
