#include <stdio.h>
#include <stdlib.h>

int fatorial(int fat)//declara��o da fun��o fatorial e variavel fat
{
    int contador, somfat;//declara��o de variaveis
    somfat=fat;
    contador=fat;
    //atribui��o de valores
    if (fat==0||fat==1)//condicional para fatorial de 0 e fatorial de 1
    {
        return 1;
        }
    else {
    while (contador!=0)//la�o enquanto contador for diferente de 0
    {
        somfat=somfat*(fat-1);
        contador--;
        fat--;
        if (fat==1)//interrup��o do la�o
            break;
    }
    }
    return somfat;
}

int main()
{
    int fat;//declara��o
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &fat);
    // input de dados
    printf("O fatorial de %d e' %d",fat, fatorial(fat));
    //output baseado na chamada da fun��o fatorial
    return 0;
}
