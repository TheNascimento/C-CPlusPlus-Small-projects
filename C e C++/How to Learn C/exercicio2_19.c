/*
    2.19) Escreva um programa em C que receba três números inteiros diferentes digitados no teclado
    e imprima a soma, a média, o produto, o menor e o maior desses números. Use a instrução if
    somente na forma ensinada neste capítulo.
*/

#include <stdio.h>

int main(){
    int numero1, numero2, numero3;

    printf("Entre com 3 inteiros diferentes: ");
    scanf("%d%d%d", &numero1, &numero2, &numero3);

    printf("A soma é %d\n", numero1 + numero2 + numero3);
    printf("A média é %d\n", (numero1 + numero2 + numero3) / 3 );
    printf("O produto é %d\n", numero1 * numero2 * numero3);

    if(numero1 <= numero2 && numero1 <= numero3){
        printf("O menor é %d\n", numero1);
    }
    if(numero2 <= numero1 && numero2 <= numero3){
        printf("O menor é %d\n", numero2);
    }
    if(numero3 <= numero1 && numero3 <= numero2){
        printf("O menor é %d\n", numero3);
    }

    if(numero1 >= numero2 && numero1 >= numero3){
        printf("O maior é %d\n", numero1);
    }
    if(numero2 >= numero1 && numero2 >= numero3){
        printf("O maior é %d\n", numero2);
    }
    if(numero3 >= numero1 && numero3 >= numero2){
        printf("O maior é %d\n", numero3);
    }
}
