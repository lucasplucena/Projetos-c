#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    //declaração
    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &num);
    //input de dados
    if (num/10000==num%10 &&num%100/10==num%10000/1000)
    //primeira condição isola o 1° e o último numero; segunda condição isola o segundo e o penúltimo
    printf("Palindromo");
    else
    printf("Nao palindromo");

    return 0;
}
