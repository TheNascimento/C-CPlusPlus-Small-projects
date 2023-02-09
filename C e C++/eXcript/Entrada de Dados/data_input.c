/*
    Author: Tiago Luiz
    Date: 09/17/14

    "Data input in C."
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    /*
        scanf("inputDataType", &inputVar);
        scanf("%type1%type2", &var1, &var2);
    */

    int num1, num2;

    printf("Digite um número: \n");
    scanf("%i",&num1);
    printf("\n%i", num1);

    return 0;
}
