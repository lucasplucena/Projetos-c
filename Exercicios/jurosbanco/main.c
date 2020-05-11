#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, txjuros, periodo, vjuros;
    printf("Entre com o valor do emprestimo (-1 para finalizar): ");
    scanf("%f", &valor);
    printf("Digite a taxa de juros: ");
    scanf("%f", &txjuros);
    printf("Digite o periodo de emprestimo em dias: ");
    scanf("%f", &periodo);
    vjuros=(valor*txjuros*periodo)/365;
    printf("O valor dos juros sera de: R$%.2f\n", vjuros);
    while (valor!=-1)
    {
        printf("Entre com o valor do emprestimo (-1 para finalizar): ");
        scanf("%f", &valor);
        if (valor==-1)
            break;
        printf("Digite a taxa de juros: ");
        scanf("%f", &txjuros);
        printf("Digite o periodo de emprestimo em dias: ");
        scanf("%f", &periodo);
        vjuros=(valor*txjuros*periodo)/365;
        printf("O valor dos juros sera de: R$%.2f\n", vjuros);
    }
    return 0;
}
