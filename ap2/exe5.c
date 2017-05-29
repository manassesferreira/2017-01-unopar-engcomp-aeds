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

#include <stdio.h> //FILE, printf
#include <string.h> //strtok, fgets
#include <stdlib.h> //atof, atoi
#define alunos 50
#define MaiorNome 137

typedef struct turma{
  char nome[MaiorNome];
  unsigned int matricula;
  float mediaFinal;
} tur;


void iniciaTurma(tur *uma_turma){
  char const* const fileName = "./engComp.csv";
  FILE* file = fopen(fileName, "r"); 
  char line[256];
  int aluno=0;  
  while ( fgets(line, sizeof(line), file) && aluno < alunos ) {
    char *p;
    
    p = strtok(line, ",");
    if(p){
      strncpy(uma_turma[aluno].nome, p, sizeof(p)*2);
    }

    p = strtok(NULL, ",");
    if(p){
      uma_turma[aluno].matricula=atoi(p);
    }

    p = strtok(NULL, ",");
    if(p){
      uma_turma[aluno].mediaFinal=atof(strtok(p,"\n"));
    }

    aluno++;
  }
  fclose(file);
}

void imprimeTurma(tur *T){
  int i;
  printf("# | nome | matricula | mediaFinal\n\n");
  for(i=0;i<alunos;i++){
    printf("%d | %s | %d | %f\n", 
      i+1, T[i].nome, T[i].matricula, T[i].mediaFinal);
  }
}

void main(){
  tur engComp[alunos];
  iniciaTurma(engComp);
  imprimeTurma(engComp);
}
