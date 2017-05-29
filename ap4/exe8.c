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

typedef struct {
  int info;
  int usado;
} arvBinaria [MaxElem]; 

void inicializa () {
  int i;
  for (i = 0; i < MaxElem; i ++) {
    arvBinaria [ i ].info = 0;
    arvBinaria [ i ].usado = 0;
  }
}

//TODO: alterar o insere dinâmico para o estático
ARVORE insere(int x,ARVORE a){
  if(a==0){
    ARVORE nova;
    nova=(ARVORE)malloc(sizeof(NO));
    nova->valor = x;
    nova->esq = 0;
    nova->dir = 0;
    return(nova);
  }
  if(x <= a->valor){
    a->esq = insert(x,a->esq);
    return(a);
  }
  a->dir = insert(x,a->dir);
  return(a);
}

/*TODO: imprimir a árvore inteira. 
* sugestão: modo gráfico. Por exemplo:
*      ( 6 )
*	     /   \
*	 ( 2 )   ( 7 )
*	 /   \      \
*( 1 ) ( 4 )  ( 8 )
*             /   \
*          ( 3 )  ( 5 )
*
* senão, pelo menos, indicar para cada nó "pai":   
*   FILHO_ESQUERDA <-- NÓ_PAI --> FILHO_DIREITA.
*/
void imprime(){
}

//TODO: alterar o em_ordem dinâmico para o estático
void em_ordem(ARVORE a){
  if(a==0)
  return;
  em_ordem(a->esq);
  printf(" %d ",a->valor);
  em_ordem(a->dir);
}

int main() {
  ARVORE a=0; 
  int i;
  int v[6]={55,12,88,3,21,4};
  inicializa();
  for(i=0; i<6; i++)
    a=insert(v[i], a);
  em_ordem(a); system("PAUSE"); 
}
