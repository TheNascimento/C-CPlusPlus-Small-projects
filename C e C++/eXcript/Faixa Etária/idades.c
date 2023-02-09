// O programa pede que o usuário digite uma idade e depois informa em qual estágio da vida essa pessoa está (ex: 65 = idoso, 10 = jovem, etc).

#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, repetir;

    printf("\t\t\t\tCalculo de vida\n\n");
    printf("Pressione Ctrl+C para sair do programa.\n");

    do{
        printf("Informe a idade da pessoa a ser verificada: \n");
        scanf("%i",&idade);

        if(idade <= 17 && idade >= 0){
            printf("\nA pessoa informada e um(a) jovem.\n");
            repetir = 0;
        }else{
            if(idade <= 59 && idade >= 18){
                printf("\nA pessoa informada esta na meia-idade.\n");
                repetir = 0;
            }else{
                if(idade >= 60){
                    printf("\nA pessoa informada e um(a) idoso(a).\n");
                    repetir = 0;
                }else{
                    printf("\nNao foi informada uma idade valida. O programa sera reiniciado.\n");
                    repetir = 1;
                }
            }
        }
    }while(repetir == 1);

    return 0;
}
