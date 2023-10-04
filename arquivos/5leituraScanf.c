#include <stdio.h>
#include <stdlib.h>

main(){

    /*
    le dados formatados em arquivo de texto
    parametros = nome logico arquivo  codigos de formatacao e variaveis 
    retorna quantidade de dados lidos senao retorna 0
    ao tentar ler o fim do arquivo retorna EOF
    */

    FILE *arquivo = fopen("arquivo3.txt", "r");
    int i;
    char frase[100];

    while (fscanf(arquivo, "%d", &i) == 1){
        printf("%d \n", i); 
    }
    while (fscanf(arquivo, "%[^\n]%*c", frase) == 1) {
        printf("Frase %d: %s\n", frase);
    }

    /*for (int i = 1; fgets(frase, sizeof(frase), arquivo) != NULL; i++ ){
        printf("Frase: %s",frase);
    }*/
     fclose(arquivo);

}