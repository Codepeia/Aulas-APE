#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
    FILE *arquivo;
    char frase[100];
    int i;

    arquivo = fopen("arquivo2.txt", "w"); //cria e abre

    if(arquivo == NULL){//verifica se foi criado com sucesso
        printf("Erro");
        exit(1);
    }

    printf("Digite a expressao: ");
    fgets(frase, sizeof(frase),stdin);

    for (i = 0; frase[i]; i++){
        fputc(frase[i], arquivo);//fputch(caractere, arquivo) = escreve um caractere em um arquivo
    }
    fclose(arquivo);

}