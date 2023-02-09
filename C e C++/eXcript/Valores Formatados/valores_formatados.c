/* Exemplos de valores printados formatados:

   printf("%tipoDeSaida", valorImpresso);
                    ou
   printf("%tipo1 %tipo2", var1, var2);

   Para integer usar %i ou %d.
   Para float/double %f.
   Para char %c.
   Para string %s.

   Para o módulo de um número %u.
   Para o endereço de memória %p.
   Para notação científica %e ou %E.
   Para porcentagem %%.
*/

#include <stdio.h>

int main(){
    int num = 1111, x = 10;
    float f = 2.2, ff = 4.12;

    // printf("%i\n", num);
    // printf("%f\n\n", f);

    printf("%i\n", x);
    printf("%.2f\n\n", ff);

    printf("%i - %.2f \n", x, ff);

    return 0;
}
