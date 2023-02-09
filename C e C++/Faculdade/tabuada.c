#include <stdio.h>

void main(void){
    // int valor;

    // printf("Insira o número em que sua tabuada será calculada: ");
    // scanf("%d", &valor);

    for(int cont = 1; cont <= 5; cont++){
        printf("\nTabuada do %d", cont);
        for(int conta = 0; conta <= 10; conta++){
            printf("\n%d x %d = %d", cont, conta, conta*cont);
        }
        printf("\n");
    }
}
