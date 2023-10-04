#include <stdio.h>
#include <stdlib.h>

struct Anamnese {
    char nome[100];
    int idade;
    char historico_medico[100];
};

int main() {
    struct Anamnese *registros = NULL; // Inicializa a lista vazia
    int tamanho = 0; // Número de registros

    // Criar um novo registro
    struct Anamnese novo_registro;
    printf("Nome: ");
    scanf("%99s", novo_registro.nome);
    printf("Idade: ");
    scanf("%d", &novo_registro.idade);
    printf("Histórico Médico: ");
    scanf("%99s", novo_registro.historico_medico);

    // Alocar espaço para o novo registro na lista
    tamanho++;
    registros = (struct Anamnese *)realloc(registros, tamanho * sizeof(struct Anamnese));
    registros[tamanho - 1] = novo_registro;

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
