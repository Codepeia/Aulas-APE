#include <stdio.h>
#include <stdlib.h>

typedef struct tam{
	char nome[10];
	int idade;
}Pessoa;

main(){
	 Pessoa *p = (Pessoa*) malloc(sizeof(Pessoa));
	 
	 p->nome = "ana";
	 p->idade = 10;
	 
	 printf("Nome: %c", p->nome);
	 printf("Idade: %d", p->idade);
	 
	
}
