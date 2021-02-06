#include <stdio.h>

int doub(int value);
static void zero_var(int *value);

int globvar;

int main(int argc, char* argv[]) {

	globvar = 10;
	printf("The global variable is: %d\n", globvar);

	globvar = doub(globvar);
	printf("Now, the global variable is: %d\n", globvar);

	int *pglobvar = NULL;
	pglobvar = &globvar;

	zero_var(pglobvar);
	printf("After pointer the var is: %d\n", *pglobvar);
	return 0;
}

static void zero_var(int *value){
	*value = 0;
}