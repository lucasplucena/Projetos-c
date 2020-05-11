#include <stdio.h>
#include <stdlib.h>

int fatorial(int);//prototipo da função fatorial

int main()
{
    int num;//declaração da variavel num
    scanf("%d", &num);
    //input de dados
    printf("%d", fatorial(num));
    //chamada da função fatorial para num
    return 0;
}

int fatorial(int num)
{
    int fat;
    if (num==1||num==0)//condicional para fatorial de 0 e de 1
        return 1;//retorno para num=0 ou num=1
    else
    {
        fat=num*fatorial(num-1);//chamada recursiva do fatorial de num
        return fat;//retorno da função
    }
}
