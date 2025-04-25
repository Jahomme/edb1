#define MAX 100
#include <stdbool.h>


typedef struct{
 int matricula;
 char nome[100];
 float nota;
} Dados;

typedef struct{
 Dados dados[MAX];
 int num_elem;
} Lista;

void inicializa_lista(Lista *l);

int tamanho(Lista *l);

int busca(Lista *l, int matricula);

void exibe_lista(Lista *l);

bool insere(Lista *l, Dados d, int pos);

bool remove_aluno(int matricula, Lista *l);

void reinicializa_lista(Lista *l);