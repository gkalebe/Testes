#include <stdio.h>

int pertenceFibonacci(int numero) {
    int a = 0, b = 1, c;

    if (numero == 0) return 1; 

    while (b < numero) {
        c = a + b;
        a = b;
        b = c;
    }

    return (b == numero); 
}

int main() {
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (pertenceFibonacci(numero)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
