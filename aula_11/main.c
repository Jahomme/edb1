#include "stdio.h"
#include "vetor.h"
#include <string.h> 

int main() {
    Lista alunos;
    Dados aluno;
    int quantidade, i, quantidade_remover;
    char flag;

    inicializa_lista(&alunos);

    //Inserir alunos
    printf("Quantos alunos deseja inserir? ");
    scanf("%d", &quantidade);
    getchar(); 

    for (i = 0; i < quantidade; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Matricula: ");
        scanf("%d", &aluno.matricula);
        getchar();

        printf("Nome: ");
        fgets(aluno.nome, sizeof(aluno.nome), stdin);
        aluno.nome[strcspn(aluno.nome, "\n")] = 0; 

        printf("Nota: ");
        scanf("%f", &aluno.nota);
        getchar();

        if (!insere(&alunos, aluno, alunos.num_elem)) {
            printf("Erro ao inserir o aluno %d!\n", i + 1);
        }
    }

    int tamanho_lista = tamanho(&alunos);

    printf("\n=== Lista de Alunos (Total: %d) ===\n", tamanho_lista);
    exibe_lista(&alunos);

    // Busca aluno
    printf("Voce deseja buscar algum aluno (y/n)? ");
    scanf("%c", &flag);

    int aluno_index;

    if(flag == 'y') {
        printf("Digite a matricula do aluno que deseja buscar: ");
        scanf("%d", &aluno.matricula);
        aluno_index = busca(&alunos, aluno.matricula);

        if(aluno_index >= 0) {
            printf("O aluno existe, e esta na posicao %d do vetor\n", aluno_index);
        } else {
            printf("Este aluno nao existe \n");
        }
    }

    // Remover alunos
    printf("Voce deseja remover quantos alunos da lista?\n");
    scanf("%d", &quantidade_remover);

    if(quantidade_remover > 0) {
        for (i = 0; i < quantidade_remover; i++) {
            printf("\n");
            printf("Digite a matricula do aluno: ");
            scanf("%d", &aluno.matricula);

            if(!remove_aluno(aluno.matricula, &alunos)) {
                printf("Este aluno nao existe\n");
            }
        }
    }

    tamanho_lista = tamanho(&alunos);

    printf("\n<--- Lista de Alunos (Total: %d) --->\n", tamanho_lista);
    exibe_lista(&alunos);

    // Resetar lista
    printf("Voce deseja resetar a lista (y/n)? ");
    getchar();
    scanf("%c", &flag);

    if(flag == 'y') {
        reinicializa_lista(&alunos);
        tamanho_lista = tamanho(&alunos);
        printf("\n<--- Lista de Alunos (Total: %d) --->\n", tamanho_lista);
        exibe_lista(&alunos);
    }


    return 0;
}
