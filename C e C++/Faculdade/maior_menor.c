#include <stdio.h>

void main(void){
    int maior, menor, valor;

    printf("Insira o primeiro valor (inteiro) do conjunto de números a serem avaliados: ");
    scanf("%d", &valor);
    maior = valor;
    menor = valor;

    for(int cont = 2; cont <= 20; cont++){
        printf("Insira o próximo valor a ser considerado: ");
        scanf("%d", &valor);

        if(valor > maior){
            maior = valor;
        } else{
            if(valor < menor){
                menor = valor;
            }
        }
    }

    printf("O maior valor foi o %d e o menor foi %d.", maior, menor);
}
