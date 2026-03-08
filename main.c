#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"
int func = 1;

int main(){
  printf("\nBem vindo ao sistema de cadastramento!");
  while(func == 1){
  switch(inicio()){
    case 1:
      cadastrar();
      break;
    case 2:
      pesquisa();
      break;
    case 3: //editar
      editar();
      break;
    case 4:
      func = 0;
    }
  
  }
  system("pause");
}
