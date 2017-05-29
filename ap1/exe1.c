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
