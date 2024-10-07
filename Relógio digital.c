#include <stdio.h>

int main(){
int segundostotais;
int horas,minutos,segundosrestantes;
char resposta;
do{
printf("Insira os segundos:");
scanf("%d",&segundostotais);

horas=segundostotais/3600;
minutos=(segundostotais-horas*3600)% 60;
segundosrestantes=(segundostotais-horas*3600)%60;

if(horas < 10)
printf("0");
printf("%d:", horas);
if (minutos<10)
printf("0");
printf("%d:", minutos);
if (segundosrestantes<10)
printf("0");
printf("%d:", segundosrestantes);
    printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);

    }while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}
