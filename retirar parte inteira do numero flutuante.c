#include <stdio.h>
int main(){

float data;
float numerodecimal;
printf("Insira o numero com ponto flutuate(decimal): ");
scanf("%f", &data);
numerodecimal= data-(int)data;


printf("Parte decimal eh : %.6f\n", numerodecimal);



return 0;

}
