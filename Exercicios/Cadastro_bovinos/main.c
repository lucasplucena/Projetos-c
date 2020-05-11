#include <stdio.h>
#include <stdlib.h>

int main() {

  struct dados {
    char corte[10];
    char raca[15];
    char peso[15];
    };
  typedef struct dados boi;
  boi *pboi;
  pboi = (boi *) calloc (5, sizeof(pboi));
  int a;
  FILE *f=fopen("dados-boi.txt","w");
  while(a<5) {
    printf("Corte: ");
    scanf("%s", pboi->corte);
    printf("Raca: ");
    scanf("%s", pboi->raca);
    printf("Peso: ");
    scanf("%s", pboi->peso);
    a++;
  }
  for(a=0;a<5;a++){
      fprintf(f,"Estoque[%i]\nNome:%s\nRaca:%s\nPeso:%s\n\n", a+1, pboi[a].corte, pboi[a].raca, pboi[a].peso);
  }
  free(pboi);
  fclose(f);
  return 0;
}
