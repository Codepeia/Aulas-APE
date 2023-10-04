#include <stdio.h>
#include <stdlib.h>

typedef struct Anamnese {
    char nome[100];
    int idade;
    char historico_medico[100];
}Registro;

int main() {
    Registro *registros = NULL; // Inicializa a lista vazia
    int tamanho = 0; // Número de registros
    int op;

    // Criar um novo registro
    do{
        Registro novo_registro;

        printf("Nome: ");
        scanf("%s", novo_registro.nome);
        printf("Idade: ");
        scanf("%d", &novo_registro.idade);
        printf("Histórico Médico: ");
        scanf("%s", novo_registro.historico_medico);
        tamanho++;

        printf("1 s 0 n: ");
        scanf("%d", &op);

        if(op == 1){
                    // Alocar espaço para o novo registro na lista
            
            registros = (struct Anamnese *)realloc(registros, tamanho * sizeof(struct Anamnese));
            registros[tamanho-1] = novo_registro;

        }
    }while(op != 0);

    printf("Registro %d\n", tamanho);

    // Imprimir os registros cadastrados
    printf("Registros de Anamnese:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Registro %d\n", i + 1);
        printf("Nome: %s\n", registros[i].nome);
        printf("Idade: %d\n", registros[i].idade);
        printf("Histórico Médico: %s\n", registros[i].historico_medico);
    }

    // Liberar a memória alocada
    free(registros);

    return 0;
}
