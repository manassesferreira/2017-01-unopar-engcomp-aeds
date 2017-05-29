/*
*Learning codes for C language
*Copyright (C) 2017  Manassés Ferreira Neto
*
*This program is free software: you can redistribute it and/or modify
*it under the terms of the GNU General Public License as published by
*the Free Software Foundation, either version 3 of the License, or
*(at your option) any later version.
*
*This program is distributed in the hope that it will be useful,
*but WITHOUT ANY WARRANTY; without even the implied warranty of
*MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*GNU General Public License for more details.
*
*You should have received a copy of the GNU General Public License
*along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <stdio.h> //printf
#include <time.h> //time
#include <stdlib.h> //srand, rand

#define m 4
#define n m

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
