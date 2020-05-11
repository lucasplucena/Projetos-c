#include <stdio.h>
#include <stdlib.h>

float raiz(float num)//declaração da função e da veriavel num
{
    float candidato=0;
    //declaração candidato
    while (candidato*candidato<num)//condicional para incrementação
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
    raiz(num);//chamada da função
    return 0;
}
