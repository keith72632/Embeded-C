#include <stdio.h>

int main(){
	int num = 100;
	int *pnum = &num;
	printf("Address of num: %p\n", pnum);

	pnum++;

	printf("New address of num: %p\n", pnum);

	pnum++;

	printf("New new address of num: %p\n", pnum);



	return 0;
}
