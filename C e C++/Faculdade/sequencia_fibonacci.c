// Cálculo de sequência de Fibonacci baseada em um valor informado pelo usuário.
#include<stdio.h>

void main(void){
    long int valor, resultado = 1, anterior = 1, auxiliar =1 ;

    printf("Insira qual posição da sequência de Fibonacci você deseja saber o valor: ");
    scanf("%ld", &valor);

    for(int cont = 3; cont <= valor; cont++){
        resultado += auxiliar;
        auxiliar = anterior;
        anterior = resultado;
    }

    if(valor == 1 || valor == 2){
        printf("O resultado é 1.\n");
    } else{
        printf("O resultado é %ld\n", resultado);
    }
}
