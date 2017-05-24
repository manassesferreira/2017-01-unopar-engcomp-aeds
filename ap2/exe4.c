#include <stdio.h> //printf
#include <time.h> //time
#include <stdlib.h> //srand, rand

#define m 4
#define n 4

int matriz[m][n]; //variável global: vivendo perigosamente

void iniciaMatriz(){
  int i,j;
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      matriz[i][j]=rand();
    }
  }
}

void imprimeMatriz(){
  int i,j;
  printf("\n");
  for(i=0;i<m;i++){
    printf("\n");
    for(j=0;j<n;j++){
      printf("%d\t",matriz[i][j]);
    }
  }
  printf("\n\n");
}

void imprimeDiagonal(){
  int i;
  printf("\n");
  for(i=0;i<m;i++){
      printf("%d\t",matriz[i][i]);
  }
  printf("\n\n");
}

void main(){
  srand(time(NULL));
  iniciaMatriz();
  imprimeMatriz();
  imprimeDiagonal();
}
