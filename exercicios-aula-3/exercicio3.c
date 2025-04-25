#include <stdio.h>

int somaDigitos(int num) {
    if (num == 0)
        return 0;
    return (num % 10) + somaDigitos(num / 10);
}

int main () {
    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    printf("A soma dos digitos deu: %d\n", somaDigitos(numero));

    return 0;
}