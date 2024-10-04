#include <stdio.h>

int main(){


float distancia,velocidade,tempo;
int n;
printf("insira a distancia percorrida:");
scanf("%f", &distancia);
printf("insira a velocidade alcancada:");
scanf("%f" ,&velocidade);
tempo=distancia/velocidade;
printf("de acordo com a distancia e a valoecidade o tempo gasto foi: %f", tempo);


return 0;


}
