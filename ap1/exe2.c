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
