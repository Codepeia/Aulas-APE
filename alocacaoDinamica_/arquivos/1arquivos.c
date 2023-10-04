#include <stdio.h>
#include <stdlib.h>


main(){

    FILE *arquivo; //ponteiro para o arquivo
    char c;

    arquivo = fopen("arquivo1.txt", "w");//abrindo e criando - w = modo gravacao

    /*
    A função getch() é utilizada para ler um caractere diretamente da entrada padrão (geralmente o teclado) sem exibi-lo na tela. Ela retorna o caractere lido como um valor inteiro. - não mostra texto no console

    getche() = mostar no console

    fputch(caractere, arquivo) = escreve um caractere em um arquivo
    deve ser passado o caractere e o nome logico do arquivo aberto
    se funcao OK - escreve 
    senao retorna EOF que é    End Of File 
    */

    while((c = getche()) != '\r'){ //// \r inicio da linha ou seja quando teclar enter sai e grava o arquivo
        fputc(c, arquivo);       //
    }
    fclose(arquivo);

}