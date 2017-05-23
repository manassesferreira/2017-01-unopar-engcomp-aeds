#include <stdio.h>
#define M_PI 3.14159265358979323846

float volumeComRetorno(float raio){
  return 4*M_PI*raio*raio*raio/3;
}

void volumeSemRetorno(float raio){
  printf("\nVolume (sem retorno): %f",4*M_PI*raio*raio*raio/3);
}

void main(){
  float raio;
  printf("\nRaio:");
  scanf("%f",&raio);
  volumeSemRetorno(raio);
  printf("\nVolume (com retorno): %f",volumeComRetorno(raio));
  printf("\n\n");
}
