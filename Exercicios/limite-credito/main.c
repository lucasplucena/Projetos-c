#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conta;
    float saldin, encargos, totcre, limcre, saldo;
    printf("Informe o numero da conta (-1 para terminar): \n");
    scanf("%d", &conta);
    printf("Informe o saldo inicial: \n");
    scanf("%f", &saldin);
    printf("Informe o total de encargos: \n");
    scanf("%f", &encargos);
    printf("Informe o total de credito: \n");
    scanf("%f", &totcre);
    printf("Informe o limite de credito: \n");
    scanf("%f", &limcre);
    printf("Conta: %d\n", conta);
    printf("Limite de credito: R$ %.2f\n", limcre);
    saldo = saldin+totcre;
    printf("Saldo: R$ %.2f\n", saldo);
    if (saldo>limcre)
    {
        printf("limite de credito ultrapassado\n");
    }
    else {
        printf("Limite de credito disponivel\n");
    }
    while (conta!=-1)
    {
    printf("Informe o numero da conta (-1 para terminar): \n");
    scanf("%d", &conta);
    if (conta==-1)
        break;
    printf("Informe o saldo inicial: \n");
    scanf("%f", &saldin);
    printf("Informe o total de encargos: \n");
    scanf("%f", &encargos);
    printf("Informe o total de credito: \n");
    scanf("%f", &totcre);
    printf("Informe o limite de credito: \n");
    scanf("%f", &limcre);
    printf("Conta: %d\n", conta);
    printf("Limite de credito: R$ %.2f\n", limcre);
    saldo = saldin+totcre;
    printf("Saldo: R$ %.2f\n", saldo);
    if (saldo>limcre)
    {
        printf("limite de credito ultrapassado\n");
    }
    else {
        printf("Limite de credito disponivel\n");
    }
    }
    return 0;
}
