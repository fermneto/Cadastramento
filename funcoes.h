#ifndef _FUNCOES_H_
#define _FUNCOES_H_

int cadastrar();
int pegainfocad(char nome[40], char datanascimento[11], char telefone[12]);
void adicionacadastro(char nomenovo[40], char datanova[11], char telefonenovo[12], char tokenovo[8]);
void criatoken(char nomenovo[40], char tokensalvo[8]);
int pesquisa();
void buscanome();
int inicio();
void buscadata();
void buscatele();
void buscatoke();
void editar();

#endif
