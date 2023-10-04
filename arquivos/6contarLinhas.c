#include <stdio.h>
#include <stdlib.h>

main(){
    FILE *arquivo = fopen("arquivo3.txt", "r");
    char c;
    int num = 0;

    if(arquivo == NULL){
        printf("Não abriu");
        return 1;
    }else{
        while((c = fgetc(arquivo))!= EOF ){  //fgetc =  le cada caractere do arquivo
              if(c == '\n')
                num++;
        }
    printf("O arquivo possui %d linhas", num);  
    }
    fclose(arquivo);

}