#include <stdio.h>
#include <stdlib.h>
int main()

{
 char nome[40], endereco[40], telefone[20];
 printf("Digite seu nome: ");
 gets(nome);
 printf("Digite seu endereco: ");
 gets(endereco);
 printf("Digite seu telefone: ");
 gets(telefone);
 printf("\n\nNome: %s\n\n",nome);
 printf("Endereco: %s\n\n",endereco);
 printf("Telefone: %s\n\n",telefone);
 return 0;
