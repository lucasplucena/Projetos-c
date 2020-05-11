#include <stdio.h>
#include <stdlib.h>

 int contagem(char x[])
{
    int num=0;
    char zero=0;
    while(x[num]!=zero)
    {
        num++;
    }
    return num;
}

int main()
{
    char palavra[40];
    printf("Digite uma palavra\n");
    gets(palavra);
    printf("A palavra %s tem %d letras", palavra, contagem(palavra));
    return 0;
}
