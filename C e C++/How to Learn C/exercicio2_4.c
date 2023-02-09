#include<stdio.h>

/*
    2.4 Escreva uma instrução (ou comentário) para realizar cada um dos pedidos seguintes:
    a) Crie um comentário declarando que um programa calculará o produto de três números inteiros.
    b) Declare as variáveis x, y, z e resultado como sendo do tipo int.
    c) Peça ao usuário para digitar três números inteiros.
    d) Leia os três números inteiros fornecidos através do teclado e armazene-os nas variáveis x, y e z.
    e) Calcule o produto dos três números inteiros contidos nas variáveis x, y e z e atribua o resultado à variável resultado.
    f) Imprima "O produto e" seguido do valor da variável resultado.
*/

int main(){
    // O programa calculará o produto de três números inteiros.
    int x, y, z, resultado;

    printf("Digite 3 números inteiros:\n");
    scanf("%d%d%d", &x, &y, &z);

    resultado = x * y * z;

    printf("\nO produto é %d", resultado);

    return 0;
}
