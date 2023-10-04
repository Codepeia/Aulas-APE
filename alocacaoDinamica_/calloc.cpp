#include <stdio.h>
#include <stdlib.h>
/* 
calloc()
aloca memoria durante a execucao do programa.
solicita memoria ao computador e retorna u
um ponteiro com o endereco do inicio
do espaco de memoria alocado

A principal diferen�a entre malloc() e calloc() 
� que a fun��o calloc() inicializa a mem�ria alocada com zeros, 
enquanto a fun��o malloc() n�o faz isso. 
Isso pode ser �til em situa��es em que voc� precisa de uma 
garantia de que a mem�ria alocada esteja limpa e pronta para uso.

*/
main(){
	//void* calloc(unsigned int num, unsigned int size);
	
	int *v = (int*)calloc(50, 4);//quantidade de posicoes, tamanho de cada posicao
	printf("Int: %d\n ", sizeof(v[0]));//agora � so trabalhar com as posicoes
	printf("Int: %d\n ", sizeof(v[49]));//ultima posicao
	
	//desnecess�rio informar quantidade de tamanhho de cada tipo, use sizeof
	
	int *c = (int*)calloc(50, sizeof(int));// igual a 200 bytes
	char *t = (char*)calloc(10, sizeof(char));// igual a 50 bytes
	double *d = (double*)calloc(50, sizeof(double));// igual a 50 bytes
	
	printf("Int: %d\n ", sizeof(c[0]));//agora � so trabalhar com as posicoes
	printf("Char: %d\n ", sizeof(t[49]));//ultima posicao
	printf("double: %d\n ", sizeof(d[30]));//ultima posicao

	for(int i = 0; i < 10; i++){
		printf("\n %d", t[i]);
	}
	
	//exemplo de como podemos trabalhar com enderecos de memoria alocados:
	
	for(int i = 0; i < 3; i++){
		printf("\n Digite o valor %d", i);
		scanf("\n%d", &t[i]);
	}
	
	free(v);
	free(c);
	free(t);
	free(d);

}
