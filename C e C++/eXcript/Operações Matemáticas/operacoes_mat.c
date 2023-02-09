/*
    Author: Tiago Luiz
    Date: 09/17/14

    "Math examples in C."
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1 = 15, num2 = 20, soma, subtracao, multi, div;

    soma = num1+num2;
    printf("O resultado da soma e: %i\n", soma);

    subtracao = num2-num1;
    printf("O resultado da subtracao e: %i\n", subtracao);

    multi = num1*num2;
    printf("O resultado da multiplicacao e : %i\n", multi);

    div = num2/3;
    printf("O resultado da divisao e : %i\n", div);

    return 0;
}
