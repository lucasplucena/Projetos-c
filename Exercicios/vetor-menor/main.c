#include <stdio.h>
#include <stdlib.h>

int menor(int valor[], int t)
{
    int menor=valor[0];
    for(t=0;t<3;t++)
    {
        if(valor[t]>valor[t+1])
        menor=valor[t+1];
    }
    return menor;
}

int main()
{
    int valor[3]={3,5,7};
    printf("O menor valor e': %d\n", menor(valor,3));
    return 0;
}
