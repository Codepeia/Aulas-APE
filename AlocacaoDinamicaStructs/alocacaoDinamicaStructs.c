#include <stdio.h>
#include <string.h>

//endereço
typedef struct Endereco{
    char logradouro[50];
    char cidade[50];
    char estado[50];
    int numero;
}Endereco;

//usuario
typedef struct Usuario{
    char nome[50];
    char email[50];
    char sexo[4];
    double altura;
    Endereco endereco;
}Pessoa;

//funcao alocacao memoria
Pessoa* criarRegistro(){
    Pessoa *p = (Pessoa*)malloc(sizeof(Pessoa));
    if(p == NULL){
        printf("Alocao inválida");
        return NULL;
    }
    return p;
}
//função cadastrar registro
Pessoa* cadastrarUsuario(){
    Pessoa *p = criarRegistro();
    
    printf("Digite o nome");
    fgets(p->nome, sizeof(p->nome), stdin);
    printf("Digite o email");
    fgets(p->email, sizeof(p->email), stdin);
    printf("Digite o logradouro");
    fgets(p->endereco.logradouro, sizeof(p->endereco.logradouro), stdin);
    printf("Digite a cidade:");
    fgets(p->endereco.cidade, sizeof(p->endereco.cidade),stdin);
    printf("Digite o numero");
    scanf("%d", &(p->endereco.numero));

    return p;

}

mostrarUsuario(Pessoa *p){
    printf("Nome: %s", p->nome);
    printf("Email: %s", p->email);
    printf("Logradouro: %s", p->endereco.logradouro);
    printf("Cidade: %s", p->endereco.cidade);
    printf("Cidade: %d", p->endereco.numero);

}

main(){

    Pessoa* p = cadastrarUsuario();
    if(p != NULL){
        printf("Cadastro realizado\n");
        mostrarUsuario(p);
        free(p);
    }
    return 0;

}