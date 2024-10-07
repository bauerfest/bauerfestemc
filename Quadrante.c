#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float x,y;
char resposta;
do{
printf("Insira o numero x: \n");
scanf("%f",&x);
printf("Insira o numero y: \n");
scanf("%f",&y);
if (x>0 && y>0){
printf("O ponto esta no primeiro quadrante\n");
}else if (x <0 && y>0){
printf("O ponto esta no segundo quadrante\n");
}else if (x <0 && y<0){
printf("O ponto esta no terceiro quadrante\n");
}else if (x >0 && y<0){
printf("O ponto esta no quarto quadrante\n");
}else if (x ==0 && y!=0){
printf("O ponto esta no lado x\n");
}else if (x !=0 && y==0){
printf("O ponto esta no lado y\n");
}else{
printf("O ponto esta na origem\n");
}

   printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);
    }while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}
