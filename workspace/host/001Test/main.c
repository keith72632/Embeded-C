#include <stdio.h>
#include "math.h"

int main(int args, char* argv[]){

    int num = 10;
    int num1 = 5;
    int result = math_add(num, num1);

    printf("The result is %i\n", result);


    return 0;
}