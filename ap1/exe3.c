#include <stdio.h> //printf
#include <time.h> //time
#include <stdlib.h> //srand, rand

void paresNoVetor(int vetor[], int tamanho){
  int i, temPar=0;

  printf("\nvetor = {");
  for(i=0; i<tamanho-1; i++){
     printf("%d, ",vetor[i]);
  }
  printf("%d}\n",vetor[i]);

  for(i=0; i<tamanho; i++){
    if(vetor[i] % 2 == 0){
      printf("\n\tvetor[%d] = %d",i,vetor[i]);
      temPar=1;
    }
  }
  if (!temPar) printf("\n\tvetor sem elementos pares!");
  printf("\n\n");

}

void main(){
  srand(time(NULL));//inicia o gerador aleatorio

  int v[]={0,2,4,6,8,10,12};
  paresNoVetor(v, sizeof(v)/sizeof(v[0]));

  int w[]={0,1,2,3,4,5,6};
  paresNoVetor(w, sizeof(w)/sizeof(w[0]));

  int x[]={1,3,5,7,9,11,13};
  paresNoVetor(x, sizeof(x)/sizeof(x[0]));

  int i, n=7;
  int z[n];
  for(i=0; i < n; i++) {
    z[i] = rand(); //gera um numero aleatorio
  }
  paresNoVetor(z, n);
}
