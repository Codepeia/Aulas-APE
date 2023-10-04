#include <stdio.h>
#include <stdlib.h>

main(){

    FILE *arquivo = fopen("notas.txt", "r");
    char nome[20];
    float nota1, nota2, nota3;
    int num = 0;

    if(arquivo == NULL){
        printf("Não abriu");
        return 1;
    }else{
        while((fscanf(arquivo,"%s %f %f %f\n", nome, &nota1, &nota2, &nota3))!= EOF )
            printf("%s teve media %.2f\n", nome, (nota1+nota2+nota3)/3);
    }

}