#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    //declaracao de variaveis
    printf("Digite um numero inteiro: ");
    scanf("%d", &n1);
    //input de dados
    n2 = n1%2;
    if (n2==0){
        printf("O numero eh par");
    }
    //condicional par (resto 0)
    else {
        printf("O numero eh impar");
    }
    //condicional negativa para resto 0
    return 0;
}
