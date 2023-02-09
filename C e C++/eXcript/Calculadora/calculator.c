/*
    Author: Tiago Luiz
    Date: 09/17/14
    Version: 1.0

    "Calculator in C."
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int num1, num2, soma, subtracao, multi, div;

    printf("\t\t\tCalculadora 1.0\n\n");
    printf("Digite dois numeros:\n");
    scanf("%i%i",&num1,&num2);

    soma = num1+num2;
    subtracao = num1-num2;
    multi = num1*num2;
    div = num1/num2;

    printf("\nA soma e: %i\n", soma);
    printf("A subtracao e: %i\n", subtracao);
    printf("O produto e: %i\n", multi);
    printf("A divisao e: %i\n", div);

    return 0;
}
