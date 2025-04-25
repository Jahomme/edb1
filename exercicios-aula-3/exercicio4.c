#include <stdio.h>

int potenciacao (int a, int b) {
    int resultado = 1;

    if (b < 0) {
        printf("'b' deve ser maior ou igual a 0\n");
        return -1;
    }

    for (int i = 0; i < b; i++) {
        resultado *= a;
    }

    return resultado;
}


int main () {
    int a, b, resultado;

    printf("Digite dois inteiros, uma base 'a' e um expoente 'b'\n");
    scanf("%d %d", &a, &b);

    resultado = potenciacao(a, b);

    if (resultado != -1)
    {  
        printf("O resultado da potencia deu: %d\n", resultado);
    }


    return 0;
}


