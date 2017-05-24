#include <stdio.h> //FILE, fgets, printf
#include <string.h> //strtok
#include <stdlib.h> //atof
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
  unsigned int uma_matricula;
  float uma_mediaFinal;

  while (fgets(line, sizeof(line), file) && aluno < alunos) {
    //printf("%s", line); 
    char *p;

    p = strtok(line, ",");
    if(p){
      strncpy(uma_turma[aluno].nome, p, sizeof(p)*2);
      //printf("%s\n", engComp[aluno].nome);
    }

    p = strtok(NULL, ",");
    if(p){
      uma_matricula=atoi(p);
      //printf("%d\n", uma_matricula);
      uma_turma[aluno].matricula=uma_matricula;
    }

    p = strtok(NULL, ",");
    if(p){
      uma_mediaFinal=atof(strtok(p,"\n"));
      //printf("%f", uma_mediaFinal);
      uma_turma[aluno].mediaFinal=uma_mediaFinal;
    }
    //printf("\n\n");
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
