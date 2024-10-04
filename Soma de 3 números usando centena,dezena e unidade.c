#include <stdio.h>

int main()
{
    int num;
    int units, tens, hundreds;

    printf("digite um numero de 3 digitos: ");
    scanf("%d", &num);

    units = num % 10;
    tens = (num / 10) % 10;
    hundreds = num / 100;
    printf("a soma total dos digitos %d eh %d\n", num, units + tens + hundreds);
    return 0;
}
