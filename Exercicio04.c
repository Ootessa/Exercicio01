#include <stdio.h>
#include <string.h>

int main() {
  char nome1[100];
  char nome2[100];
  
  printf("Digite o primeiro nome: ");
  scanf("%s", nome1);
  printf("Digite o segundo nome: ");
  scanf("%s", nome2);
  
  int ordem = strcmp(nome1, nome2);

  if(ordem > 0){
    printf("%s e %s",nome2, nome1);
  }else if(ordem < 0){
    printf("%s e %s", nome1, nome2);
  }else{
    printf("%s e %s", nome1, nome2);
  }
}
