#include <stdio.h>

int main() {
    int numero;
    char resposta;
   do  {

        printf("Insira um numero:\n");
        scanf("%d", &numero);

        if (numero % 2==0)
            printf("O numero eh par \n", numero);
        else
            printf("O numero eh impar \n", numero);


    return 0;
}
