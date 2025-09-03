/*Implemente a função concatena: Recebe uma string de destino. Recebe duas strings de origem 
Junta em destino as duas strings de origem (sobrescrevendo o conteúdo de destino, se houver)
void concatena (char* d, char* o1, char* o2);
A implementação deve usar a função tamanho da questão 3.*/
# include <stdio.h>

int tamanho(char* str);
void concatena(char*d, char* o1, char* o2);

int main(){
    char string_d[101];
    char str1[51];
    char str2[52];

    printf("insira a string de destino: ");
    scanf("%s", string_d);
    printf("insira a #1 string de origem: ");
    scanf("%s", str1);
    printf("insira a #2 string de origem: ");
    scanf("%s", str2);

    concatena(string_d, str1, str2);

    return 0;
}
int tamanho(char* str){
    int soma = 0;

    for (int i = 0; str[soma] != '\0'; i++){
        soma++;
    }
    return soma; // devolve a soma pra main
}

void concatena(char*d, char* o1, char* o2){
    int i, j;

    for (i = 0; i < tamanho(o1); i++){ // tamanho(o1) diz quantos caracteres tem o1
        d[i] = o1[i]; // copia caracteres da origem 1 pra destino (substituindo)
}
    for (j = 0; j < tamanho(o2); j++){
        d[i + j] = o2[j]; // o2 substitui caracteres de destino a partir da onde o1 terminou a substituiçao dele
    }
    d[i + j] = '\0'; // finaliza string (se chegar em \0 significa q a string terminou)

    printf("strings concatenadas: %s ", d);
}