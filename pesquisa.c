#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"


int pesquisa(){
  system("cls");
  printf("\n####################");
  printf("\n# Métodos de Busca #");
  printf("\n####################\n\n");
  
  int escolha;
  
  printf("(1) Nome\n");
  printf("(2) Data\n");
  printf("(3) Telefone\n");
  printf("(4) Token\n");
  printf("(5) Cancelar\n\n");
  
  printf("Escolha seu método de busca: ");
  scanf("%i", &escolha);
 
  switch(escolha){
    case 1:
      buscanome();
      break;
    case 2:
      buscadata();
      break;
    case 3:
      buscatele();
      break;
    case 4:
      buscatoke();
      break;
    case 5:
      system("cls");
      return 0;
  }  
}


void buscanome(){
  
  char nomeb[40], datab[15], teleb[15], tokeb[13], nomep[40];
  
  printf("\n\nDigite o nome que você deseja buscar: ");
  printf(" ");
  scanf(" %s", nomep);
  
  FILE *f;
  f = fopen("cadastros.txt", "r+");
  int qtd;
  fscanf(f, "%d", &qtd);
  qtd = 0;
  system("cls");
  while (fscanf(f, "%s %s %s %s ", tokeb, nomeb, datab, teleb) == 4){
    if(nomep[0] == nomeb[1] && nomep[1] == nomeb[2] && nomep[2] == nomeb[3]){
      if(qtd==0){
        printf("\n#######################");
        printf("\nUsuário(s) encontrados:");
        printf("\n#######################\n");
        printf("\n##########################################################################################################");
        }
      printf("\nNome: %s Token: %s Data: %s Telefone: %s", nomeb, tokeb, datab, teleb);
      qtd++;}}
  if(qtd == 0){
    printf("\n###########################");
    printf("\nNenhuma usuário encontrado!");
    printf("\n###########################\n");
    return;
  }
  fclose(f);
  printf("\n##########################################################################################################\n");
}

void buscadata(){
  
  char nomeb[40], datab[15], teleb[15], tokeb[13], datap[40];
  
  printf("\n\nDigite a data que você deseja buscar: ");
  printf(" ");
  scanf(" %s", datap);
  
  FILE *f;
  f = fopen("cadastros.txt", "r+");
  int qtd;
  fscanf(f, "%d", &qtd);
  qtd = 0;
  system("cls");
  
  while (fscanf(f, "%s %s %s %s ", tokeb, nomeb, datab, teleb) == 4){
    if((datap[0] == datab[1] && datap[1] == datab[2]) || (datap[3] == datab[4] && datap[4] == datab[5]) || 
    (datap[6] == datab[7] && datap[7] == datab[8] && datap[8] == datab[9] && datap[9] == datab[10])){
      if(qtd==0){
      printf("\n#######################");
      printf("\nUsuário(s) encontrados:");
      printf("\n#######################\n");
      printf("\n##########################################################################################################");
      }
      printf("\nNome: %s Token: %s Data: %s Telefone: %s", nomeb, tokeb, datab, teleb);
      qtd++;}}
  if(qtd == 0){
    printf("\n###########################");
    printf("\nNenhuma usuário encontrado!");
    printf("\n###########################\n");
    return;
  }
  fclose(f);
  printf("\n##########################################################################################################\n");
}

void buscatele(){
  
  char nomeb[40], datab[15], teleb[15], tokeb[13], telep[40];
  
  printf("\n\nDigite o telefone que você deseja buscar: ");
  printf(" ");
  scanf(" %s", telep);
  
  FILE *f;
  f = fopen("cadastros.txt", "r+");
  int qtd;
  fscanf(f, "%d", &qtd);
  qtd = 0;
  system("cls");
  
  while (fscanf(f, "%s %s %s %s ", tokeb, nomeb, datab, teleb) == 4){
    if(telep[0] == teleb[1] && telep[1] == teleb[2] && telep[2] == teleb[3] && telep[4] == teleb[5] && telep[5] == teleb[6]){
      if(qtd==0){
      printf("\n#######################");
      printf("\nUsuário(s) encontrados:");
      printf("\n#######################\n");
      printf("\n##########################################################################################################");
      }
      printf("\nNome: %s Token: %s Data: %s Telefone: %s", nomeb, tokeb, datab, teleb);
      qtd++;}}
  if(qtd == 0){
    printf("\n##########################");
    printf("\nNenhum usuário encontrado!");
    printf("\n##########################\n");
    return;
  }
  fclose(f);
  printf("\n##########################################################################################################\n");
}

void buscatoke(){
  
  char nomeb[40], datab[15], teleb[15], tokeb[13], tokep[40];
  
  printf("\n\nDigite o token que você deseja buscar: ");
  printf(" ");
  scanf(" %s", tokep);
  
  FILE *f;
  f = fopen("cadastros.txt", "r+");
  int qtd;
  fscanf(f, "%d", &qtd);
  qtd = 0;
  system("cls");
  
  while (fscanf(f, "%s %s %s %s ", tokeb, nomeb, datab, teleb) == 4){
    if(tokep[0] == tokeb[1] && tokep[1] == tokeb[2] && tokep[2] == tokeb[3] && tokep[4] == tokeb[5] && tokep[5] == tokeb[6]){
      if(qtd==0){
      printf("\n#######################");
      printf("\nUsuário(s) encontrados:");
      printf("\n#######################\n");
      printf("\n##########################################################################################################");
      }
      printf("\nNome: %s Token: %s Data: %s Telefone: %s", nomeb, tokeb, datab, teleb);
      qtd++;}}
  if(qtd == 0){
    printf("\n##########################");
    printf("\nNenhum usuário encontrado!");
    printf("\n##########################\n");
    return;
  }
  fclose(f);
  printf("\n##########################################################################################################\n");
}
