/*Altere os exercícios 1 e 4 para usar a função a seguir a ser definida:
void escreva_string (FILE* f, char* str) { ... }
A função recebe um arquivo e uma string e escreve a string no arquivo, caractere a caractere.*/
#include <stdio.h>
#include <string.h>

void escreva_string(FILE* f, char* str){

    for(int i = 0; i < (int)strlen(str); i++){
        fputc(str[i],f);
    }
}

int main(){
    char palavra[26];
    
    printf("insira uma palavra: ");
    scanf("%s", palavra);

    FILE* f = fopen("palavra.txt", "w");

    escreva_string(f, palavra); // chama funcao passando arquivo e a string

    fclose(f);
    printf("palavra gravada!");

    return 0;
}