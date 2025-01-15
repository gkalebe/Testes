#include <stdio.h>

#define TAM 30

int main() {
    double faturamento[TAM] = {1000, 2000, 0, 1500, 1800, 0, 0, 2200, 2300, 2500, 0, 2700, 2900, 0, 
                               0, 3100, 3200, 3400, 0, 3600, 3700, 0, 0, 4000, 4100, 4200, 0, 4300, 4400, 0};
    double soma = 0, media;
    double menor = 1e9, maior = -1e9;
    int diasComFaturamento = 0, diasAcimaMedia = 0;

    for (int i = 0; i < TAM; i++) {
        if (faturamento[i] > 0) {
            soma += faturamento[i];
            diasComFaturamento++;
            if (faturamento[i] < menor) menor = faturamento[i];
            if (faturamento[i] > maior) maior = faturamento[i];
        }
    }

    media = soma / diasComFaturamento;
    for (int i = 0; i < TAM; i++) {
        if (faturamento[i] > media) {
            diasAcimaMedia++;
        }
    }

    printf("Menor faturamento: %.2lf\n", menor);
    printf("Maior faturamento: %.2lf\n", maior);
    printf("Dias com faturamento acima da média: %d\n", diasAcimaMedia);

    return 0;
}
