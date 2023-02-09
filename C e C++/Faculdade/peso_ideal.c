// Cálculo de peso ideal. Versão 1.0 de 05/06/2018

#include <stdio.h>

void main(void){
    float altura, peso;
    char sexo;

    printf("\t\t\tCÁLCULO DE PESO IDEAL\n\n");
    // Condições para validar os dados:
    do{
        printf("Informe o sexo da pessoa, sendo (m) para masculino e (f) para feminino: ");
        scanf("%c", &sexo);
    } while(sexo != 'f' && sexo != 'F' && sexo != 'm' && sexo != 'M'); // Condição com bug. Talvez pelo tipo char?
    do{
        printf("Informe a altura da pessoa. Use ponto(.) como separador decimal: ");
        scanf("%f", &altura);
    } while(altura <= 0.8);

    if(sexo == 'm' || sexo == 'M') {
        peso = (72.7*altura)-58;
    } else {
        peso = (62.1*altura)-44.7;
    }

    printf("\nPara essa pessoa, o peso ideal é: %.2f Kg.\n", peso);
}
