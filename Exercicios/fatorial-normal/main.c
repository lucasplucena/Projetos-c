#include <stdio.h>
#include <stdlib.h>

int fatorial(int fat)//declaração da função fatorial e variavel fat
{
    int contador, somfat;//declaração de variaveis
    somfat=fat;
    contador=fat;
    //atribuição de valores
    if (fat==0||fat==1)//condicional para fatorial de 0 e fatorial de 1
    {
        return 1;
        }
    else {
    while (contador!=0)//laço enquanto contador for diferente de 0
    {
        somfat=somfat*(fat-1);
        contador--;
        fat--;
        if (fat==1)//interrupção do laço
            break;
    }
    }
    return somfat;
}

int main()
{
    int fat;//declaração
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &fat);
    // input de dados
    printf("O fatorial de %d e' %d",fat, fatorial(fat));
    //output baseado na chamada da função fatorial
    return 0;
}
