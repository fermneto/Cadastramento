#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void editar(){
  int escolha, tamanho, buftam;
  tamanho = 0;
  char nomeb[40], datab[40], teleb[15], tokeb[40], tokep[40], novav[40], buffer[150];
  system("cls");
  
  printf("####################\n");
  printf("## Modo de Edição ##\n");
  printf("####################\n\n");
  
  printf("Digite o token do usuário: ");
  scanf(" %s", tokep);
  
  FILE *f;
  f = fopen("cadastros.txt", "r+");
  int qtd;
  fscanf(f, "%d", &qtd);
 
  system("cls");
  int x = 0;
  
  
  while (fscanf(f, "%s %s %s %s", tokeb, nomeb, datab, teleb) == 4){
    if(tokep[0] == tokeb[1] && tokep[1] == tokeb[2] && tokep[2] == tokeb[3] && tokep[4] == tokeb[5] && tokep[5] == tokeb[6]){
      printf("\n#######################");
      printf("\n# Usuário encontrado: #");
      printf("\n#######################\n");
      printf("\nNome: %s Token: %s Data: %s Telefone: %s\n", nomeb, tokeb, datab, teleb);
      x++;
      
      printf("\nOpcões de Edição:\n");
      printf("\n(1) Editar nome\n(2) Editar data \n(3) Editar telefone\n(4) Cancelar\n");
      printf("\nEscolha sua forma de edição: ");
      scanf("%i", &escolha);
      buftam = strlen(nomeb) + strlen(tokeb) + strlen(datab) + strlen(teleb);
      switch(escolha){
        case 1:
          printf("\n\nDigite o novo nome: ");
          scanf(" %s", novav);
          sprintf(buffer, "%s [%s] %s %s", tokeb, novav, datab, teleb);
          fseek(f, tamanho, SEEK_SET);
          
          if(strlen(buffer)<= buftam+3){
            fprintf(f, "%s [%s] %s %s", tokeb, novav, datab, teleb);
            for(int j = 0; j < 3+ (buftam - strlen(buffer)); j++){
              
              fputs(" ",f);
            }
              system("cls");
            printf("Cadastro atualizado !");
            printf("\nReinicie o programa.");

          }
          else if(strlen(buffer)> buftam+3){
            system("cls");
            printf("O nome novo não deve extrapolar o tamanho do atual !");
          }
          
          break;
          
        case 2:
          printf("\n\nDigite a nova data: ");
          scanf(" %s", novav);
          sprintf(buffer, "%s %s [%s] %s", tokeb, nomeb, novav, teleb);
          fseek(f, tamanho, SEEK_SET);
          
          if(strlen(buffer)<= buftam+3){
            fputs(buffer, f);
            for(int j = 0; j < 3+ (buftam - strlen(buffer)); j++){
              
              fputs(" ",f);
            }
              system("cls");
            printf("Cadastro atualizado !");
            printf("\nReinicie o programa.");

          }
          else if(strlen(buffer)> buftam+3){
            system("cls");
            printf("A data deve ter um formato correto !");
          }
          break;
        case 3:
          printf("\n\nDigite o novo telefone: ");
          scanf(" %s", novav);
          sprintf(buffer, "%s %s %s [%s]", tokeb, nomeb, datab, novav);
          fseek(f, tamanho, SEEK_SET);
          
          if(strlen(buffer)<= buftam+3){
            fputs(buffer, f);
            for(int j = 0; j < 3+ (buftam - strlen(buffer)); j++){
              
              fputs(" ",f);
            }
              system("cls");
            printf("Cadastro atualizado !");
            printf("\nReinicie o programa.");

          }
          else if(strlen(buffer)> buftam+3){
            system("cls");
            printf("O telefone deve ter um formato correto !");
          }
          break;
        case 4:
          system("cls");
          return;
      }
      break;
    }
    tamanho = tamanho + strlen(nomeb) + strlen(tokeb) + strlen(datab) + strlen(teleb)+4;
      
  }
  if(x == 0){
    printf("\n##########################");
    printf("\nNenhum usuário encontrado!");
    printf("\n##########################\n");
    return;
  }
  
}
