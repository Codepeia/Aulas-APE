#include <stdio.h>
#include <stdlib.h>
/* 
realloc()
aloca ou realoc memoria durante a exeucao do programa
solicita memoria ao computador e retorna u
um ponteiro com o endereco do inicio
do espaco de memoria alocado
*/
int main(){
	
//	void* realloc(void* ptr, unsigned int num);
	//ponteiro generico de onde ja tinha alocacao
	//nova quantidade de memoria a ser alocada
	
	int *v = (int*) malloc(100);//25 enderecos
	//problema: nao alocquei memeoria suficiente
	//solucao nao interessante: realizar o free e alocar com malloc novamente
	//solucao melhor usar realoc prar aumentar espaco de memoria
	
	v = (int*) realloc(v,200); //aumento para 50 enderecos
	
	int *c = (int*)malloc(10 * sizeof(int));
	c = (int *) realloc(c, 20 * sizeof(int));
	
	//se o ponteiro para o bloco de memoria for NULL
	//a funcao pode ser utilizada para alocar o espaco como malloc
	
	int *p;
	p = (int *) realloc (NULL, 50 * sizeof(int));
	//é o mesmo que:
	p = (int *) malloc (50 * sizeof(int));
	

	return 0;	
}
