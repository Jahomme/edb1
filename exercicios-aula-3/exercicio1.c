#include <stdio.h>

int fatorial (int n) {
    if (n == 0) {
        return 1;
    }
        else {
            return n * fatorial(n - 1);
        }
}

int combinacao (int n, int k) {
    int resultado = fatorial(n) / (fatorial(k) * fatorial(n - k));
    return resultado;
}

int main () {
    int n, k, resultado;

    printf("Digite dois numeros inteiros\n");
    scanf("%d %d", &n, &k);

    resultado = combinacao(n, k);

    printf("O resultado deu: %d", resultado);

    return 0;
}