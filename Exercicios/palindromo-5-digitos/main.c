#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    //declara��o
    printf("Digite um numero de 5 digitos: ");
    scanf("%d", &num);
    //input de dados
    if (num/10000==num%10 &&num%100/10==num%10000/1000)
    //primeira condi��o isola o 1� e o �ltimo numero; segunda condi��o isola o segundo e o pen�ltimo
    printf("Palindromo");
    else
    printf("Nao palindromo");

    return 0;
}
