/* Programa exemplo usando String em C */

#include <stdio.h>

int main(){
    char resposta[20];

    printf("Qual e o inimigo do gato? \nR: "); // N�o � bom usar characters especiais nas strings (procurar se h� um m�todo de faz�-lo).
    scanf("%s",&resposta);

    printf("\nO inimigo do gato e o %s.\n" ,resposta);

    return 0;
}
