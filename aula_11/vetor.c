#include "vetor.h"
#include "stdio.h"
#include "stdbool.h"

void inicializa_lista(Lista *l){
 l -> num_elem = 0;
}

int tamanho(Lista *l){
 return l -> num_elem;
}

int busca(Lista *l, int matricula) {
 for(int i=0; i < l->num_elem; i++){
 if(matricula == l->dados[i].matricula)
    return i;
 }
 return -1;
}

void exibe_lista(Lista *l){
    printf("Lista:\n");
    for(int i = 0; i < l->num_elem; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("  Matricula: %d\n", l->dados[i].matricula);
        printf("  Nome: %s\n", l->dados[i].nome);
        printf("  Nota: %.2f\n\n", l->dados[i].nota);
    }
}


bool insere(Lista *l, Dados d, int pos){
    int j;
    if((l->num_elem == MAX) || (pos < 0) || (pos > l->num_elem))
        return false;
    for(j = l->num_elem; j > pos; j--) {
        l->dados[j] = l->dados[j-1];
    }
    l->dados[pos] = d;
    l->num_elem++;
    return true;
}

bool remove_aluno(int matricula, Lista *l){
    int pos, j;
    pos = busca(l, matricula);
    if(pos == -1)
        return false;
    for(j = pos; j < l->num_elem - 1; j++) {
        l->dados[j] = l->dados[j + 1];
    }
    l->num_elem--;
    return true; 
}

 void reinicializa_lista(Lista *l){
    l -> num_elem = 0;
}