#include <stdio.h>

int main(){


float salario,horas,salarioh;
int n;
printf("insira salario por hora:");
scanf("%f", &salarioh);
printf("insira as horas trabalhadas por mes:");
scanf("%f" ,&horas);
salario=salarioh*horas;
printf("o seu salario por mes eh: %.2f",salario);


return 0;


}
