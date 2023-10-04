#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    float altura;
} Pessoa;

Pessoa* criarPessoa() {
    Pessoa* p = (Pessoa*)malloc(sizeof(Pessoa));
    if (p == NULL) {
        printf("Falha na alocação de memória.\n");
        return NULL;
    }
    return p;
}

void liberarPessoa(Pessoa* p) {
    free(p);
}

int main() {
    Pessoa* pessoa = criarPessoa();
    if (pessoa == NULL) {
        return 1;
    }

    // Acesso aos membros da struct
    pessoa->idade = 25;
    pessoa->altura = 1.75;

    // Exibição dos dados da struct
    printf("Idade: %d\n", pessoa->idade);
    printf("Altura: %.2f\n", pessoa->altura);

    // Liberação da memória alocada
    liberarPessoa(pessoa);

    return 0;
}
