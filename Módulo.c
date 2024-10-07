#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int numero;
char resposta;
do{
printf("Insira o numero negativo/positivo: \n");
scanf("%d",&numero);
if (numero<=0){
printf("O modulo de %d eh |%d|\n", numero,(-1)*numero);
}else{
printf("O modulo de %d eh |%d|\n",numero, numero);
}
   printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);
    }while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}
