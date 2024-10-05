// Escreva um programa que leia do usuário 2 valores de um tipo "inteiro". O programa deve imprimir "EQUAL" se ambos os valores forem iguais. Caso contrário, o programa deve imprimir "NOT EQUAL".
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int valor1,valor2,resultado;
char resposta;
do{
printf("Insira o valor 1: \n");
scanf("%d",&valor1);
printf("Insira o valor 2: \n");
scanf("%d",&valor2);
if(valor1==valor2){
    printf("Os valores sao iguias!\n");
}else{
    printf("Os valores nao sao iguias!\n");
    }

 printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);
    }while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}













