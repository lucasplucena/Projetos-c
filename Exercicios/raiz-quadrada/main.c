#include <stdio.h>
#include <stdlib.h>

float raiz(float num)//declara��o da fun��o e da veriavel num
{
    float candidato=0;
    //declara��o candidato
    while (candidato*candidato<num)//condicional para incrementa��o
    {
        candidato=candidato+0.001;
    }
    printf("A raiz de %.0f e' %.2f", num, candidato);
    //output de dados excluindo o erro
    return 0;
}
int main()
{
    float num;
    printf("Digite um numero: ");
    scanf("%f", &num);
    //input de dados
    raiz(num);//chamada da fun��o
    return 0;
}
