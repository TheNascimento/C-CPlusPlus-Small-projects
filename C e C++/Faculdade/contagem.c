#include <stdio.h>

void main(void){
    int contador = 1;

    while(contador <= 10){
        if(contador != 5){
            printf("%d\n", contador);
        } else {
            printf("Cinco!\n");
        }
        contador++;
    }

    printf("Fim!\n");
}
