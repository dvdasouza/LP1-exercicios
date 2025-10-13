/*Leia o arquivo do exercício 1, caractere a caractere, para uma string (máximo de 25 caracteres).
Exiba na tela a string lida.*/
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

    // leitura
    int c;
    f = fopen("palavra.txt", "r");

    printf("palavra lida: ");
    while((c = fgetc(f)) != EOF){
        printf("%c", c);
    }

    fclose(f);

    return 0;
}