/*Altere todos os exercícios anteriores para usar o modo binário do fopen, ex.:
fopen("x.txt", "wb")
Houve alguma mudança de comportamento? Explique.*/
#include <stdio.h>
#include <string.h>

int main(){
    FILE*f = fopen("palavra.bin", "wb");
    char palavra[26]; // 26 bytes (25 caracteres + /0)

    printf("insira uma string: ");
    scanf("%s", palavra);

    fwrite(palavra, sizeof(char), strlen(palavra), f);

    fclose(f);
    printf("palavra escrita em modo binário: %s",palavra);

    return 0;
}