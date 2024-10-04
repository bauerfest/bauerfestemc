#include <stdio.h>

int main(){


float a1,d,an,Sn;
int n;
printf("insira o numero inicial:");
scanf("%f", &a1);
printf("insira o numero sequencial:");
scanf("%f" ,&an);
printf("insira o numero de elementos:");
scanf("%d", &n);
Sn = (a1 +an) * n/2;
printf("o termo n da sequancia aritmetica eh:%.2f\n",Sn);


return 0;


}
