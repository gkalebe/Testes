#include <stdio.h>
#include <string.h>

void inverterString(char s[]) {
    int tamanho = strlen(s);
    for (int i = 0; i < tamanho / 2; i++) {
        char temp = s[i];
        s[i] = s[tamanho - i - 1];
        s[tamanho - i - 1] = temp;
    }
}

int main() {
    char string[100];

    printf("Informe uma string: ");
    scanf("%s", string);

    inverterString(string);

    printf("String invertida: %s\n", string);

    return 0;
}
