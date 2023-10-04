#include <stdio.h>
#include <stdlib.h>

struct tam{
	int x;
	double y;
	char c;
};

main(){
	
	printf("Char: %d", sizeof(char));
	printf("\nINt: %d", sizeof(int));
	printf("\n Double: %d", sizeof(double));
	printf("\nStruct: %d", sizeof(struct tam));
	
	//função de alocacao dinamica MALLOC
	//protitipo da função
	
	//void* malloc(unsigned int num)
	
	 int *p = (int *) malloc(200);
	 
	 for(int i = 0; i < 50 ; i++){
	 	 printf("\n%d", &p[i]);
	 }
	 
	 int *b = (int *) malloc(10 * sizeof(int));
	 
	 if(b == NULL){
	 	printf("Não existe memoria suficiente para a alocacao");
	 }
	 
	for(int i = 0; i < 10 ; i++){
		// scanf("%d", &b[i]);
	 }
	 
	for(int i = 0; i < 10 ; i++){
		printf("\n%d", b[i]);
	 }

	 
	 //funcao calloc 
	 
	 //void* calloc( unsignet int num, unsigned int size);
	 printf("-------------");
		int *v = (int*)calloc(50, 4);//igual 200
		
	 	printf("\n\n\n%d", &v[0]);
	 	printf("\n%d", &v[1]);
	 	
	 	double *d = (double*) calloc(8, sizeof(double));
	 	
	 	for(int i = 0 ; i < 8; i++){
	 		printf("\n%d", d[i]);
		 }
		 
		int *w = (int *) malloc(5 * sizeof(int));
		
		for(int i = 0; i < 5; i++){
			printf("\n%d",&w[i]);
		}
		
		//realloc
		//prototipo - void* realloc(void p*, unsigned num)
		
		w = (int*) realloc(w, 3 * sizeof(int));
		
		for(int i = 0; i < 8; i++){
			printf("\n\n\n%d",&w[i]);
		}
	 	
		free(p);
		free(b);
		free(v);
		free(d);	 
	 
}
