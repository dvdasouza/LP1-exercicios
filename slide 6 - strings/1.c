/*Implemente a função tamanho:
Recebe uma string
Retorna a quantidades de caracteres da string
int tamanho (char* str);*/
# include <stdio.h>

int tamanho(char* str);

int main(){
    char string[51]; //array de char (string) até \0 
    
    printf("insira uma string: ");
    scanf("%s", string);

    tamanho(string);
    return 0;
}
int tamanho(char* str){
    int soma = 0;

    for (int i = 0; str[i] != '\0'; i++){ // \0 finaliza string
        soma++;
    }
    printf("a quantidade de caracteres é: %d", soma); // fora do loop pq senao vai imprimir a soma uma de cada vez
    return soma; // devolve a soma pra main
}