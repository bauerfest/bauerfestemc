#include <stdio.h>

int main (){

    float porcentagem, numero;
    int opcao;
    char resposta;

    do {
        printf("Escolha uma opcao:\n");
        printf("1. Converter numero para porcentagem\n");
        printf("2. Converter porcentagem para numero\n");
        printf("Escolha uma opcao (1 ou 2): ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite um numero: ");
            scanf("%f", &numero);
            porcentagem = numero * 100;
            printf("O numero %.2f em porcentagem eh %.2f%%\n", numero, porcentagem);
        }
        else if (opcao == 2) {
            printf("Digite uma porcentagem: ");
            scanf("%f", &porcentagem);
            numero = porcentagem / 100;
            printf("A porcentagem %.2f em numero eh %.2f\n", porcentagem, numero);
        }
        else {
            printf("Opcao invalida!\n");
        }

        printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);

    } while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}

