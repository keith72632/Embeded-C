#include <stdio.h>

void wait_for_user_input(void);

int main() {
	int a;
	int b;


	printf("enter two integers\n");
	scanf("%d %d", &a, &b);
	printf("Bitwise &: %d\n", (a & b));
	printf("Bitwise |: %d\n", (a | b));
	printf("Bitwise ^: %d\n", (a ^ b));
	printf("Bitwise ~: %d\n", (~a));

	if((a & 1)){
		printf("A is odd\n");
	} else {
		printf("A is even\n");
	}
	if((b & 1)){
		printf("b is odd\n");
	}else {
		printf("B is even\n");
	}

	printf("Bit format for abefore set: 0x%x\n", a);
	int output = a | 0x90;
	printf("Bit format after set: 0x%x\n", output);

	wait_for_user_input();
}

void wait_for_user_input(void){
	printf("Press enter to exit");
	getchar();
}

/*
 * main.c
 *
 *  Created on: Jan 20, 2021
 *      Author: keith
 */


