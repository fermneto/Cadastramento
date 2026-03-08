#include <stdio.h>
#include <stdlib.h>

int inicio(){
  int escolha;

  printf("\n\n(1) Cadastrar \n(2) Buscar\n(3) Editar\n(4) Sair\n\n");
  printf("Selecione o que deseja fazer: ");
  scanf(" %i", &escolha);
  return escolha;

}
