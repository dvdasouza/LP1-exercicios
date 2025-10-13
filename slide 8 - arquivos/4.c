/*Leia 10 strings com scanf (máximo de 25 caracteres) para um vetor de strings.
Escreva cada string para um arquivo, caractere a caractere, usando um for dentro de outro for*/
#include <stdio.h>
#include <string.h>

int main(){
    char palavras[10][26];
    FILE* f = fopen("palavras.txt", "w");
    
    for(int i = 0; i <10; i++){
        printf("insira a #%d string: ", i+1);
        scanf("%s", palavras[i]);
    }

    for(int i = 0; i < 10; i++){ // percorre cada uma das 10 strings do vetor
        for(int j = 0; j < (int)strlen(palavras[i]);j++){ // percorre cada caractere das strings
            fputc(palavras[i][j],f); // escreve cada caractere no arquivo   
        }
    }

    fclose(f);

    return 0;
}