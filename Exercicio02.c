#include <stdio.h>
#include <stdlib.h>

//5 variaveis, 3 para notas, 1 para media exerc e outra para media aprov
int main() {
  float nota1 = 0;
  float nota2 = 0;
  float nota3 = 0;
  float mediaexe = 0;
  float mediaapro = 0;
  
  //Perguntar e anotar valores das 4 primeiras incognitas
  printf("Digite a nota 1: ");
  scanf("%f", &nota1);
  
  printf("Digite a nota 2: ");
  scanf("%f", &nota2);
  
  printf("Digite a nota 3: ");
  scanf("%f", &nota3);
  
  printf("Digite a média dos exercícios: ");
  scanf("%f", &mediaexe);
//MA = (N1 + N2*2 + N3*3 + ME)/7
  mediaapro = (nota1 + nota2*2 + nota3*3 + mediaexe)/7;

  if (mediaapro >= 9) {
    printf("Nota A");
  } else if (mediaapro >= 7.5 && mediaapro < 9) {
      printf("Nota B");
  } else if (mediaapro >= 6 && mediaapro < 7.5) {
      printf("Nota C"); 
  } else if(mediaapro >= 4 && mediaapro < 6){
      printf("Nota D");
  } else {
      printf("Nota E");
  } 
  
}
