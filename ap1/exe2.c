#include <stdio.h>
#define tamanhoVetor 10

void main(){
  int vetor[tamanhoVetor];
  int posicao;
  for(posicao=0;posicao<tamanhoVetor;posicao++){
    printf("\nVetor[%d] recebe:",posicao);
    scanf("%d",&vetor[posicao]);
  }
  for(posicao=tamanhoVetor-1;posicao>=0;posicao--){
    printf("\nVetor[%d]=%d",posicao,vetor[posicao]);
  }
  printf("\n\n");
}
