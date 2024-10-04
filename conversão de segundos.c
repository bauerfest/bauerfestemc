#include <stdio.h>

int main(){

int segundostotais;
int horas, minutos, segundosrestantes;
printf("Insira os segundos totais para que eu converta para horas,minutos e segundos restantes:");
scanf("%d", &segundostotais);
horas= segundostotais/3600;
minutos=(segundostotais-horas*3600)/60;
segundosrestantes=(segundostotais-horas)%60;
printf(" Esses segundos equivalem a %d horas %d minutos e %d segundos restantes", horas, minutos,segundosrestantes);


return 0;


}
