#include <stdio.h>

int main() {
    int ano;
    char resposta;

    do {
        printf("Digite o ano: ");
        scanf("%d", &ano);

       
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            printf("Ano %d eh bissexto.\n", ano);
        } else {
            printf("Ano %d nao eh bissexto.\n", ano);
        }

        printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}
