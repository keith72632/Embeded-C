#include <stdio.h>
#include <stdlib.h>

int main() {
    double charge, chargeE;
    double electrons;
    printf("Enter the charge\n");
    scanf("%lf", &charge);

    printf("Enter the charge of an electron\n");
    scanf("%lf", &chargeE);

    electrons = (charge/chargeE) * -1;

    printf("The total number of electrons is %le\n", electrons);

    while(getchar() != '\n'){
    
    }

    getchar();

}
