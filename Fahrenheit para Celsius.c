#include <stdio.h>

int main(){

int c;
double f;
printf("insira sua temperatura em F°:");
scanf("%d", &c);
f=(c*1.8+32);c = (f - 32) / 1.8;
printf(" a temperatura em f eh: %lf\n °", f);



}
