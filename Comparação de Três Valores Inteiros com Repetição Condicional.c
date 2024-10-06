#include <stdio.h>

int main() {

    int valor1, valor2, valor3;
    char resposta;

    do {
        printf("Insira o valor 1: \n");
        scanf("%d", &valor1);
        printf("Insira o valor 2: \n");
        scanf("%d", &valor2);
        printf("Insira o valor 3: \n");
        scanf("%d", &valor3);

        // Verificação correta
        if (valor1 == valor2 && valor2 == valor3) {
            printf("Os valores são iguais!\n");
        } else {
            printf("Os valores não são iguais!\n");
        }

        printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}
