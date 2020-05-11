#include <stdio.h>
#include <stdlib.h>

int contfrase();

int main()
{
    char palavras[50];
    printf("Escreva uma frase separando palavras por espacos:\n");
    gets(palavras);
    printf("A frase tem %d palavras\n", contfrase(palavras));
    return 0;
}

int contfrase(char x[])
{
    char space=32, zero=0;
    int num, num2=1;
    for(num=0;x[num]==zero;){
        return 0;
    }
    for(num=0; x[num]!=zero; num++){
    if(x[num]==space)
        num2++;
    }
    return num2;
}
