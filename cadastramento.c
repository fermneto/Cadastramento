#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "funcoes.h"

int cadastrar(){
  char nome[40];
  char datanascimento[11];
  char telefone[12];
  char tokencd[8];
  
  system("cls");
  printf("#######################");
  printf("\n# Realizando Cadastro #");
  printf("\n#######################\n\n");
  
  pegainfocad(nome, datanascimento, telefone);
  criatoken(nome, tokencd);

  adicionacadastro(nome, datanascimento, telefone, tokencd);
  system("cls");
  printf("\n#######################");
  printf("\n# Cadastro concluido! #");
  printf("\n#######################\n");

}


int pegainfocad(char nome[40], char datanascimento[11], char telefone[12]){
  printf("Digite o nome completo: ");
  scanf(" %[^\n]s\n", nome);
  
  printf("Digite a data de nascimento(dd/mm/aaaa): ");
  scanf(" %s", datanascimento);

  printf("Digite o telefone: ");
  scanf(" %[^\n]s\n", telefone);

}


void criatoken(char nomenovo[40], char tokensalvo[8]){
  
  char token[8];
  char rsv[3];
  srand(time(0));
  int j = 0;

  for(int i =1; i<6;i = i+2 ){
    token[i] = nomenovo[j];
    j++;}

  for(int i =0; i<8; i = i+2){
    int randomico = rand()%10;
    sprintf(rsv, "%d", randomico);
    token[i] = *rsv;
  }
  
  strcpy(tokensalvo, token);
}


void adicionacadastro(char nomenovo[40], char datanova[11], char telefonenovo[12], char tokenovo[8]){

  FILE* f;
  f = fopen("cadastros.txt", "r+");
  
  fseek(f, 0, SEEK_END);
  fprintf(f, "\n[%s] [%s] [%s] [%s]", tokenovo, nomenovo, datanova, telefonenovo);

  fclose(f);
  
}
