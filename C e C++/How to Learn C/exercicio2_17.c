/*
    2.17) Escreva um programa que imprima do número 1 ao 4 na mesma linha. Escreva o programa usando os seguintes métodos:
    a) Usando uma instrução printf sem especificadores de conversão.
    b) Usando uma instrução printf com identificadores de conversão.
    c) Usando quatro instruções printf.
*/

#include <stdio.h>

int main(){
    printf("1, 2, 3, 4\n");
    printf("%d, %d, %d, %d\n", 1, 2, 3, 4);
    printf("1, ");
    printf("2, ");
    printf("3, ");
    printf("4");
}
