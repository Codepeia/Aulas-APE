#include<stdio.h>

typedef struct lista {
    int info;
    struct lista* prox;
}Lista;

Lista* inicializa (void){
    return NULL;}

/* função vazia: retorna 1 se vazia ou 0 se não vazia */
int vazia (Lista* lista){
    if (lista == NULL)
        return 1;
    else
        return 0;}

/* inserção no início: retorna a lista atualizada */
Lista* insereInicio (Lista* lista, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = lista;
    return novo;}

Lista* insereFim(Lista* lista, int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = NULL;

    if (lista == NULL)
        return novo;

    Lista* atual = lista;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;
    return lista;}

/* função imprime: imprime valores dos elementos */
void imprime (Lista* lista){
    if (vazia(lista)) {
        printf("Lista vazia.\n");
        return;
    }
    Lista* p = lista; /* variável auxiliar para percorrer a lista */
    while (p != NULL) {
        printf("%d -> ", p->info);
        p = p->prox;
    }
    printf("NULL");
}

/* função busca: busca um elemento na lista */
Lista* busca (Lista* lista, int v){
    Lista* p = lista;

    while (p != NULL) {
        if (p->info == v){
            printf("\n Achou o elemento %d", p->info);
            return p;
        }
        p = p->prox;
    }
    printf("\n Nao achou o elemento");
    return NULL; /* não achou o elemento */
        
}  

/* função retira: retira elemento da lista */
Lista* remover (Lista* lista, int v) {
        Lista* ant = NULL; /* ponteiro para elemento anterior */
        Lista* p = lista; /* ponteiro para percorrer a lista*/

        /* procura elemento na lista, guardando anterior */
        while (p != NULL && p->info != v) {
            ant = p;
            p = p->prox;
        }
        /* verifica se achou elemento */
        if (p == NULL)
            return lista; /* não achou: retorna lista original */

            /* retira elemento */
        if (ant == NULL) {
            /* retira elemento do inicio */
            lista = p->prox;
        } else {
             /* retira elemento do meio da lista */
             ant->prox = p->prox;
        }
        free(p);
        return lista;
}

main(){

        Lista* lista; /* declara uma lista não inicializada */
        lista = inicializa(); /* inicializa lista como vazia */
        lista = insereInicio(lista, 23); /* insere na lista o elemento 23 */
        lista = insereInicio(lista, 45); /* insere na lista o elemento 45 */
        lista = insereInicio(lista, 12); /* insere na lista o elemento 45 */
        lista = insereInicio(lista, 5);
        lista = insereFim(lista,100);

        imprime(lista);

        lista = remover(lista, 5);
        lista = remover(lista, 23);
        lista = remover(lista, 100);

        printf("\n");
        imprime(lista);
        busca(lista, 45);

        Lista* l = lista;
        while (l != NULL) {
            Lista* proximoElemento = l->prox;
            free(l);
            l = proximoElemento;
        }
        

        return 0;

}