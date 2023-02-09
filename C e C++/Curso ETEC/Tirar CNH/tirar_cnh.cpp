// Programa exercício em C++ para retirada do CNH.

#include <stdio.h>
#include <stdlib.h>

main (){
    char escolha;
    int ano, idade, diferenca;

    printf ("Para calcular a partir do ano de nascimento digite 'a', para calcular pela idade pressione somente ENTER: ");
    scanf ("%c",&escolha); // Quando fizer a leitura e armazenamento de vars é melhor deixar tudo junto (podem ocorrer bugs).

    if(escolha=='a'){
        printf ("\nDigite o ano que voce nasceu: ");
        scanf ("%d",&ano);
        idade = 2014-ano;
        } 
	else{
        printf ("\nDigite quantos anos voce tem: ");
        scanf ("%d",&idade);
        }

    if(idade>=18){
        printf ("\nVoce esta apto a tirar o CNH.\n");
        } 
	else{
        diferenca = 18-idade;
        printf ("\nVoce so podera tirar o CNH daqui %d ano(s).\n", diferenca);
        }

     return 0;
     // system ("pause");
}
