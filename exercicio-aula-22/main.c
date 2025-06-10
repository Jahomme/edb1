#include "pilha.h"
#include "stdio.h"
#include <stdbool.h>

int calculadora(char c, int a, int b) {
    if(c == '+'){
        return a + b;
    } else if (c == '-') {
        return a - b;
    } else if (c == '*') {
        return a * b;
    } else if (c == '/'){
        return a / b;
    } else {
        printf("Erro ao realizar operação!\n");
    }
    
}

void menu() {
    printf("Escolha uma das opcoes:\n");
    printf("1. Inserir número\n");
    printf("2. Inserir operador\n");
    printf("-1. Encerrar programa\n");
}

int main() {
    int valor, opcao_insercao, topo_pilha, valor_operado;
    char operador;
    Pilha pilha;
    pilha.topo = -1;

    do {
        menu();
        scanf("%d", &opcao_insercao);
        switch (opcao_insercao)
        {
        case 1:
            printf("Digite o valor desejado:");
            scanf("%d", &valor);
            getchar();
            push(&pilha, valor);
            break;
        
        case 2:
            printf("Digite o operador desejado (+ , - , * , /):");
            scanf("%c", &operador);

            topo_pilha = pop(&pilha);
            valor_operado = calculadora(operador, topo_pilha, pop(&pilha));

            push(&pilha, valor_operado);

            break;

        case -1: 
            break;
        
        default:
            break;
        }
    } while (valor != -1);

    peek(&pilha);
    return 0;
}