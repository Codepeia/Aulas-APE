/*uma variavel  é uma posicao de memoria que armazena uma dado
que pode ser utiilizado pelo programa
cada tipo de dado específica de memoria para o armazenamento

Exemplo: para se construir um programa que processe as vendas de uma determinada 
empresa: solucao simples - criar um vetor para armazenar a quantidade media de 
vendas
*/

#include<stdio.h>
main(){
    float vendas[500];
    //e se ocorrer mais de 500 vendas? a quantidade de memoria nao é suficiente
    //e se não ocorrer mais que 100 vendas no mês - estarei alocando memoria sem necessidade

    //considere: arrays sao agrupamentos sequenciais de dados de um mesmo tipo na memoria
    //um ponteiro guarda o endereco de um dado na memoria
    //o nome do array é um ponteiro para o primeiro elemento do array
     

     //solução: é possivel solicitar um bloco de memoria e colocar sua primeiro po
     //posicao em um ponteiro?

     //sim a linguagem c permite alocar dinamicamente ou seja em tempo de execucao 
     //blocos de memroia utlizando ponteiros, dá se o nome de alocacao dinamica

     //trabalha como um ponteiro apontando para uma regiao e alocando os enderecos sequenciais 
     //como se fosse um vetor (trabalha um ponteiro como se fosse um array e não um arrau como ponteiro)

     //funcoes disponbiveis na biblioteca stdlib.h
     //malloc  calloc realloc e free    operador sizeof


     sizeof

     alocar memoria pode varia para os diferentes tipos. Exemplo:

char - 1 byte
int - 4 bytes
float - 4 bytes
double - 8 bytes

entretanto esses valores podem varia de acordo com a arquitetura e sistema operacional

}