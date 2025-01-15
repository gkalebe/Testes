#include <stdio.h>

int main() {
    double SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, Outros = 19849.53;
    double total = SP + RJ + MG + ES + Outros;

    printf("Percentual de SP: %.2lf%%\n", (SP / total) * 100);
    printf("Percentual de RJ: %.2lf%%\n", (RJ / total) * 100);
    printf("Percentual de MG: %.2lf%%\n", (MG / total) * 100);
    printf("Percentual de ES: %.2lf%%\n", (ES / total) * 100);
    printf("Percentual de Outros: %.2lf%%\n", (Outros / total) * 100);

    return 0;
}
