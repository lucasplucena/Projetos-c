#include <stdio.h>
#include <stdlib.h>

int menor(int valor[], int t)
{
    int menor=valor[t], x=t;
    for(t=0;t<x;t++)
    {
        if(valor[t]>valor[t+1]&&valor[t]>valor[t-1])
        menor=valor[t];
    }
    return menor;
}

int main()
{
    int seq[5]={4,5,2,1,3}, ab;
    for(ab=5; ab>0; ab--)
    {
        printf("%d\n", menor(seq, ab));
    }
    return 0;
}
