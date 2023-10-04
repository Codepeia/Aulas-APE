#include <stdio.h>
#include <stdlib.h>

//abre e imprimi o arquivo na tela
main(){
    int c;
    FILE *arquivo;

    char *nomeArquivo = "arquivo3.txt";

    //abrir arquivo para leitura

    if ((arquivo = fopen(nomeArquivo, "r")) == NULL){
        printf("Não foi possível abrir o arquivo");
        exit(1);
    }
    //imprimir

    //leitura de cada caractere do arquivo e impressao na tela

    //fgetc =  le cada caractere do arquivo
    //o loog continua ate que a função retorne EOF, indicando que chegou ao final
    
    while((c = fgetc(arquivo)) != EOF){
            printf("%c", c);
        }
    fclose(arquivo);//fechar para evitar corrompimento no arquivo.
    

}