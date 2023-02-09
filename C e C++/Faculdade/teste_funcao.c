#include<stdio.h>

// Função simples para testar a necessidade do comando "return" em C

void teste(){
    printf("Olá mundo!");
    // return 0; Não é necessário, como previsto!
    printf("\nTestando múltiplas saídas na função.\n");

}

main(){
    teste();

    return 0;
}
