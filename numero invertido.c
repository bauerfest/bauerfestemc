#include <stdio.h>
int main(){
int num,centena,dezena,unidade,reverso;
printf("Insira o numero de 3 digitos:");
scanf("%d",&num);
centena=num/100;
dezena=(num/10)%10;
unidade=num%10;
reverso=unidade;
reverso=reverso*10+dezena;
reverso=reverso*10+centena;
printf("o numero reverso of %d eh:%d%d%d \n", num, unidade, dezena,centena);
printf("o numero reverso de %d= %d \n", num, reverso);
return 0;





}
