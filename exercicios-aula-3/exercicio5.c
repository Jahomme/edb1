#include <stdio.h>
#include <string.h>

int palindromo(char str[], int inicio, int fim) {
    if (inicio >= fim)
        return 1;

    if (str[inicio] != str[fim])
        return 0;

    return palindromo(str, inicio + 1, fim - 1);
}

int main () {
    char palavra[100];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);

    if (palindromo(palavra, 0, tamanho -1))
        printf("E palindromo\n");
    else
        printf("Nao e palindromo\n");

    return 0;
}