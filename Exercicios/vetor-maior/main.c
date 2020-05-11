#include <stdio.h>
#include <stdlib.h>

int maior(int vetor[], int t)
{
    int pont=t, maior;
    for(t=0; t<=pont; t++)
    {
        if(vetor[t]>vetor[t+1])
            maior=vetor[t];
    }
    return maior;
}

int main()
{
    int valores[6]={2,4,5,6,93,6}, num=6;
    printf("O maior valor e': %d", maior(valores, num));
    return 0;
}
