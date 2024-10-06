#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int numero;
char resposta;
do{
printf("Insira o numero: \n");
scanf("%d",&numero);
if (numero>0){
printf("O valor eh positivo! \n");
}else if (numero<0){
printf("O valor eh negativo! \n");
}else{
printf("O valor eh 0\n");
}
   printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);
    }while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}


