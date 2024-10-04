#include <stdio.h>
#include <locale.h>

int main() {
    float num1,num2;
    char resposta;
   do  {

        printf("Insira o numero 1:\n");
        scanf("%f", &num1);
        printf("Insira o numero 2 :\n");
        scanf("%f", &num2);

        if (num1 >= num2){
            printf("MAXIMO: %.2f \n", num1);
            printf("MINIMO: %.2f \n", num2);
        }
        else
            printf("MAXIMO: %.2f \n", num2);
            printf("MINIMO: %.2f \n", num1);

        getchar();


        printf("Quer tentar novamente? (S/s para Sim)\n");
        scanf("%c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    return 0;
}
