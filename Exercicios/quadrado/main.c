#include <stdio.h>
#include <stdlib.h>

int potencia(int a, int b)//declara��o da fun��o e de variaveis de base e potencia
{
    int contador=1, sq;
    // declara��o de vari�vel sq e contador
    sq=a;
    if (b==0)//condi��o de expoente 0
    printf("%d elevado a 0 e' 1", a);
       while (contador<b)//la�o para multiplicar base*base at� o contador igualar b
    {
        sq=sq*a;
        ++contador;
    }
    if (contador==b)
        {printf("%d elevado a %d e' %d",a, b, sq);
        //condicional quando o contador iguala b e output
        }
    return 0;
}
int main()
{
    int a, b;
    printf("digite o primeiro valor ");
    scanf("%d", &a);
    //input de base
    printf("digite o segundo valor ");
    scanf("%d", &b);
    //input de expoente
    potencia(a,b);
    //chamada da fun��o
    return 0;
}
