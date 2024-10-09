#include <stdio.h>

int main() {
    int a, b, c;
    char resposta;

    do {
        printf("Digite a, b e c: ");
        scanf("%d%d%d", &a, &b, &c);

        if (a == 0 || b == 0 || c == 0) {
            printf("Divisao por 0 invalida! Digite os numeros novamente.\n");
        } else if ((a % b == 0 || b % a == 0) && (b % c == 0 || c % b == 0) && (a % c == 0 || c % a == 0)) {
            printf("Numeros divisiveis!\n");
        } else {
            printf("Numeros nao divisiveis!\n");
        }

        printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}
