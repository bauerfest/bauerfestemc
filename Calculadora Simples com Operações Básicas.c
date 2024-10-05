#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {


char operador,resposta;
int num1, num2,resultado;
do{
printf("Insira o numero 1: \n");
scanf("%d", &num1);
printf("Insira o numero 2: \n");
scanf("%d", &num2);
printf("Escolha a operação (+, -, *, /, %%): \n");
    scanf(" %c", &operador);
switch(operador){
case '+' :
    resultado=num1+num2;
     printf("Resultado: %d + %d = %d\n", num1, num2, resultado);
            break;
case '-':
    resultado=num1-num2;
     printf("Resultado: %d - %d = %d\n", num1, num2, resultado);
            break;
            case '*':
    resultado=num1*num2;
     printf("Resultado: %d * %d = %d\n", num1, num2, resultado);
            break;
            case '/':
    resultado=num1/num2;
     printf("Resultado: %d / %d = %d\n", num1, num2, resultado);
            break;

            case '%':
    resultado=num1%num2;
     printf("Resultado: %d %% %d = %d\n", num1, num2, resultado);
            break;
            default:
                printf("Operador incorreto ou inválido!");
    }


        printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);
    }while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}
