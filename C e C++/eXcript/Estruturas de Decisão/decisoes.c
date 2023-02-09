// Estruturas de decisão (if/else) em C

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    char c;

    printf("Digite um caracter em letra minuscula: ");
    scanf("%c",&c);

    if(c >= 'a'){
        printf("\nSegue a letra em maiusculo: %c\n", toupper(c));
    } /*else{
    } */

    printf("%i" i==1); // Comparação direta, se for True imprime 1 se for False imprime 0

    return 0;
}
