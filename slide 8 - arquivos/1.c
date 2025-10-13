#include <stdio.h>
#include <string.h>

int main(){
    FILE*f = fopen("palavra.txt", "w");
    char palavra[26]; // 26 bytes (25 caracteres + /0)

    printf("insira uma string: ");
    scanf("%s", palavra);

    for(int i = 0; i <(int)strlen(palavra); i++){
        fputc(palavra[i], f); // escreve cada caractere no arquivo
    }
    fclose(f);
    printf("palavra escrita: %s",palavra);

    return 0;
}