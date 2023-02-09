// Programa para tirar média de 4 notas

#include<stdio.h>
#include<stdlib.h>

int main(){
    float nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0; // Inicialização de todas as var com o mesmo valor!

    printf("\t\t\tPrograma: Media Escolar\n\n");
    printf("Digite a primeira nota do aluno: \n");
    scanf("%f",&nota1);
    printf("\nDigite a segunda nota do aluno: \n");
    scanf("%f",&nota2);
    printf("\nDigite a terceira nota do aluno: \n");
    scanf("%f",&nota3);
    printf("\nDigite a quarta nota do aluno: \n");
    scanf("%f",&nota4);

    media = (nota1+nota2+nota3+nota4)/4;
    printf("\n\nSua media foi de: %.2f\n", media);
    if(media >= 5){
        printf("Parabens voce foi aprovado!\n");
    } else{
        printf("Infelizmente voce foi reprovado!\n");
    }

    return 0;
}
