#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i=10;
	char c= 'a';
	
	int *iptr = &i; /*초기화를 i값으로 하고 i를 가르키니까 int형*/
	char *cptr = &c;
	int *iptr2 = iptr; /*iptr 자체가 포인터라서 &연산자 필요 없음*/ 

	
	printf("i : %p\n%p (size : %i)\n", iptr, &i, sizeof(iptr));
	printf("c : %p\n%p (size : %i)\n", cptr, &c, sizeof(cptr));
	printf("iptr2 : %p, %i\n", iptr2, *iptr2);
	
	return 0;
}
