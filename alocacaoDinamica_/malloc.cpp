#include <stdio.h>
#include <stdlib.h>
/* malloc()
aloca memoria durante a execucao do programa.
solicita memoria ao computador e retorna u
um ponteiro com o endereco do inicio
do espaco de memoria alocado

*/
main(){
	//void * malloc (unsigned int num);
	//retorno void - ponteiro generico por nao saber o tipo 
	// convertemos para o que quisermos
	//somente um valor inteiro negativo
	//quantidade de memoria reservada em bytes (int num)
	
	//funcionamento:
	//recebe aquantidade de bytes a ser alocada e retorna:
	//NULL: em caso de erro de alocação - 
	//ponteiro para a primeira posicao de memoria alocada.
	
	//exemplo:
	//reserva o espaco de 50 inteiros (200 bytes)
	int *v = (int*)malloc(200);
	printf("Int: %d\n ", sizeof(v[0]));//agora é so trabalhar com as posicoes
	printf("Int: %d\n ", sizeof(v[49]));//ultima posicao
	//porem nao se deve trabalhar com valores absolutos por causa
	//da variacao dos sistemas
	//solucao: usar sizeof
	
	int *c = (int*)malloc(50 * sizeof(int));// igual a 200 bytes
	char *t = (char*)malloc(50 * sizeof(char));// igual a 50 bytes
	double *d = (double*)malloc(50 * sizeof(double));// igual a 50 bytes
	
	printf("Int: %d\n ", sizeof(c[0]));//agora é so trabalhar com as posicoes
	printf("Char: %d\n ", sizeof(t[49]));//ultima posicao
	printf("double: %d\n ", sizeof(d[30]));//ultima posicao
	
	for(int i = 0; i < 50; i++){
		printf("\n %d", &t[i]);
	}
	
	//se nao houver memoria suficiente a funcao retorna null
	printf("----");
	int *x;
	x = (int *)malloc(5*sizeof(int));
	if(x == NULL){
		printf("Erro na alocacao, não ha memoria suficiente");
		exit(1);
	}		
	for(int i = 0; i < 5; i++){
		printf("\n%d", &x[i]);
	}
	
	free(v);
	free(c);
	free(t);
	free(d);
	free(x);

}
