/*
    2.18) Escreva um programa em C que peça ao usuário para fornecer dois números inteiros, obtenha-os do usuário e imprima o maior deles seguido das palavras
    "e maior". Se os números forem iguais, imprima a mensagem "Estes números sao iguais". Use a instrução if somente na forma de seleção simples que você
    aprendeu neste capítulo.
*/

#include <stdio.h>

int main(){
    int numero1, numero2;

    printf("Informe os dois números inteiros:\n");
    scanf("%d%d", &numero1, &numero2);

    if(numero1 > numero2){
        printf("O número %d é maior que %d.", numero1, numero2);
    }
    if(numero1 < numero2){
        printf("O número %d é maior que %d.", numero2, numero1);
    }
    if(numero1 == numero2){
        printf("Os dois números são iguais!", numero1, numero2);
    }
}
