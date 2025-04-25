#include <stdio.h>

int somaPares(int n) {

    if (n == 1)
        return 2;
        else
            return (2 * n) + somaPares(n - 1);
}

int main () {
    int n, resultado;

    printf("Digite um numero inteiro:\n");

    scanf("%d", &n);
    resultado = somaPares(n);

    printf("O resultado deu: %d", resultado);

    return 0;
}