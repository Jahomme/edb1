#include <stdio.h>


int verificaPar(int n) {
    int resultado;

    if (n % 2 == 0)
        resultado = 1;
    else
        resultado = 0;

    return resultado;
}
int verificaImpar(int n) {
    int resultado;

    if (n % 2 != 0)
        resultado = 1;
    else
        resultado = 0;

    return resultado;
}

int verificaNumero(int n) {
    if (n < 10)  
        return 1;

    int ultimo = n % 10;         
    int penultimo = (n / 10) % 10;  

    if ((verificaPar(ultimo) && verificaImpar(penultimo)) || (verificaImpar(ultimo) && verificaPar(penultimo))) 
        return verificaNumero(n / 10);  

    return -1; 
}

int main () {
    int n, resultado;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    resultado = verificaNumero(n);

    if (resultado != -1)
        printf("Valido\n");
    else
        printf("Invalido\n");

    return 0;
}