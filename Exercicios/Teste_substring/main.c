#include <stdio.h>
#include <stdlib.h>

int contida();
int contagem();

int main()
{
    char palavra[20], trecho[20];
    int p, a;
    printf("Digite o numero de pares: ");
    scanf("%d", &p);
    for(a=0;a<p;a++){
    fflush(stdin);
    printf("Digite a substring:\n");
    gets(trecho);
    printf("Digite a string:\n");
    gets(palavra);
    //input de dados
    if(contida(palavra, trecho)==0)
        printf("Esta contida\n");
    else
        printf("Nao esta contida\n");
    }
    return 0;
}

int contagem(char x[])
{
    int a;
    for(a=0; x[a]!='\0'; a++){}
    return a;
}

int contida(char x[], char y[])
{
    int i, j=0, k=0, a=contagem(y);
    for(i=0; i<a; i++)//aumentando o vetor de y
    {
        while(y[i]!=x[k]&&x[k]!='\0')
        {
        k++;//aumentando o vetor de x
        }
        if(y[i]==x[k])
        j++;
        }
    if(j==a)//se os valores forem iguais, todas as letras da substring estão dentro da string
    return 0;//retorno se contida
    else
    return 1;//retorno se não contida
}
