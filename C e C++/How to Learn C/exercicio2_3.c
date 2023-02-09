#include <stdio.h>

/*
    2.3 Escreva uma instrução simples em C para realizar cada um dos pedidos que se seguem:

    a) Declare do tipo int as variáveis c, estaVariavel, q76354 e numero.
    b) Peça ao usuário para fornecer um inteiro. Termine sua mensagem (prompt) com dois pontos (:) seguidos de um espaço e deixe o cursor posicionado após o
    espaço.
    c) Leia um inteiro digitado no teclado e armazene na variável a o valor fornecido.
    d) Se a variável numero não for igual a 7, imprima "A variável numero nao e igual a 7".
    e) Imprima a mensagem "Este e um programa em C" em uma linha.
    f) Imprima a mensagem "Este e um programa em C" em duas linhas, sendo que a primeira linha termina com a palavra um.
    g) Imprima a mensagem "Este e um programa em C" com cada palavra em uma linha separada.
    h) Imprima a mensagem "Este e um programa em C" com todas as palavras separadas por tabulações.
*/
int main(){
    int c, estaVariavel, q76354, numero, a;

    printf("Forneça um número inteiro: ");
    scanf("%d", &a);

    if(numero != 7){
        printf("\nA variável número não é igual a 7");
    }

    printf("\n\nEste é um programa em C");
    printf("\nEste é um\nprograma em C");
    printf("\nEste\né\num\nprograma\nem\nC");
    printf("\nEste\té\tum\tprograma\tem\tC");

    return 0;
}
