/*
    Montar um programa que calcula o "Peso ideal". Para isso tem que ter a altura
    e o sexo para realizar o calculo. Formulas: para homens (72,7*h)-58 e para
    mulheres (62,1*h)-44. OBs: nao terminar o programa ate que o usuario
    diga que sim.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
     int contador = 1;
     float altura, peso;
     char sexo, escolha;

     /*
        Para uso em versões do Windows apenas:

        system ("title Calculo do peso ideal");
        system ("color d0");
    */

     printf("\t\t\tCalculo de IMC (Peso Ideal)\n\n");
     printf("Pressione Ctrl+C para sair do programa.\n\n");

     do {
         printf ("Pessoa %d:\n", contador);
         printf ("Informe a altura: ");
         scanf ("%f", &altura);
         printf ("Informe  sexo (M) masculino (F) feminino: ");
         scanf ("%s", &sexo);
         if (sexo == 'M' || sexo == 'm') {
                  peso = (72.7*altura)-58;
                  printf ("O peso ideal da pessoa %d e Kg %.2f", contador, peso);
                  }
         else {
              peso = (62.1*altura)-44;
              printf ("O peso ideal da pessoa %d e Kg %.2f", contador, peso);
              }

         printf ("\n\nVoce quer calcular outra vez? (S) sim (N) nao: ");
         scanf ("%s", &escolha);
         printf ("----------------------------------------------------\n\n");
         contador++;
         }while(escolha == 'S' || escolha == 's');

     // Para uso em versões do Windows apenas: system ("pause");
     return 0;
}
