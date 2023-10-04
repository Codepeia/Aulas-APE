#include <stdio.h>
#include <stdlib.h>

//escrevendo dados em um arquivo texto com fprintf()

//fprintf(arquivo, "formatação", variaveis)
//          ponteiro, codigos de formatacao dos dados a serem escritos, dados a serem escritos

//se funcao sucesso, retorna a quantidade de bytes escritos 
//senao retorna 0.
main(){
    FILE *arquivo = fopen("arquivo3.txt","w");
    char frase[100];

    //escrevendo numeros de 1 a  10
    for(int i = 1; i <= 10; i++){
        fprintf(arquivo, "%d \n", i);
    }
    //escrevendo frases
    for(int i = 1; i <= 5; i++){
        printf("Digite a frase %d: ", i);
        fgets(frase, sizeof(frase), stdin);
        fprintf(arquivo, "%d. %s", i, frase);

    }

    //escrevendo frases

    fclose(arquivo);

}