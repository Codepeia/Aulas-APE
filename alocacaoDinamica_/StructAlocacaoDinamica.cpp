#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    float altura;
} Pessoa;

int main() {
    Pessoa *p = (Pessoa *)malloc(sizeof(Pessoa));
    if (p == NULL) {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    // Acesso aos membros da struct
    p->idade = 25;
    p->altura = 1.75;

    // Exibição dos dados da struct
    printf("Idade: %d\n", p->idade);
    printf("Altura: %.2f\n", p->altura);

    // Liberação da memória alocada
    free(p);

    return 0;
}
