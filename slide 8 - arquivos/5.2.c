#include <stdio.h>
#include <string.h>

void escreva_string(FILE*f, char str[10][26]){

        for(int i = 0; i < 10; i++){ // percorre cada uma das 10 strings do vetor
        for(int j = 0; j < (int)strlen(str[i]);j++){ // percorre cada caractere das strings
            fputc(str[i][j],f); // escreve cada caractere no arquivo   
        }
    }
}
int main(){
    char palavras[10][26];

    for(int i = 0; i <10; i++){
        printf("insira a #%d string: ", i+1);
        scanf("%s", palavras[i]);
    }
    FILE* f = fopen("palavras.txt", "w");

    escreva_string(f, palavras);

    fclose(f);
    printf("strings gravadas!");

    return 0;
}