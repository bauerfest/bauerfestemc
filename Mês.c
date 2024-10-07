#include <stdio.h>
#include <stdlib.h>

int main(){
    int mes;
    char resposta;
    do{
        printf("Insira o numero do mes de 1-12: ");
        scanf("%d", &mes);

        if (mes == 1){
            printf("O numero %d se refere ao mes de Janeiro\n", mes);
        }else if (mes == 2){
            printf("O numero %d se refere ao mes de Fevereiro\n", mes);
        }else if (mes == 3){
            printf("O numero %d se refere ao mes de Marco\n", mes);
        }else if (mes == 4){
            printf("O numero %d se refere ao mes de Abril\n", mes);
        }else if (mes == 5){
            printf("O numero %d se refere ao mes de Maio\n", mes);
        }else if (mes == 6){
            printf("O numero %d se refere ao mes de Junho\n", mes);
        }else if (mes == 7){
            printf("O numero %d se refere ao mes de Julho\n", mes);
        }else if (mes == 8){
            printf("O numero %d se refere ao mes de Agosto\n", mes);
        }else if (mes == 9){
            printf("O numero %d se refere ao mes de Setembro\n", mes);
        }else if (mes == 10){
            printf("O numero %d se refere ao mes de Outubro\n", mes);
        }else if (mes == 11){
            printf("O numero %d se refere ao mes de Novembro\n", mes);
        }else if (mes == 12){
            printf("O numero %d se refere ao mes de Dezembro\n", mes);
        }else{
            printf("O numero %d nao se refere a nenhum mes\n", mes);
        }

        printf("Deseja tentar novamente? (S/N): ");
        scanf(" %c", &resposta);

    }while (resposta == 'S' || resposta == 's');

    printf("Encerrando o programa.\n");

    return 0;
}


