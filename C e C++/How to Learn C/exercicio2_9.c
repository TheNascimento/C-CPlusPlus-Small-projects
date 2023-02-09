/*
    2.9 Escreva uma única instrução ou linha em C que realize cada um dos pedidos seguintes:
    a) Imprima a mensagem "Entre com dois números".
    b) Atribua o produto das variáveis beca variável a.
    c) Informe que o programa realiza um exemplo de cálculo de folha de pagamento (i.e., use
    um texto que ajude a documentar um programa).
    d) Forneça ao programa três valores inteiros digitados no teclado e coloque esses valores nas
    variáveis inteiras a, b e c.
*/

#include <stdio.h>

int main(){
    int a, b, c;

    printf("Entre com dois números: \n");
    scanf("%d%d", &a, &b);

    c = a * b;

    printf("\nO programa realiza um exemplo de cálculo de folha de pagamento."); // Instruções confusas, comentário existe apenas para satisfazer o item c).
    printf("\nEntre com três números inteiros: \n");
    scanf("%d%d%d", &a, &b, &c);

    return 0;
}
