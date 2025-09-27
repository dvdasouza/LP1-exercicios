#include <stdio.h>
#include <string.h> // para usar strcpy

union cidadao{
    int cpf;
    int rg;
    char nome[50];
};

int main(){

    union cidadao pessoa;

    pessoa.cpf = 215178987; // ocupa memoria da union
    printf("cpf: %d\n", pessoa.cpf);

    pessoa.rg = 108123405; // sobreescreve a memoria 
    printf("rg: %d\n", pessoa.rg);

    strcpy(pessoa.nome, "Maria Eduarda"); // sobreescreve a memoria de novo
    /* strcpy copia conteudo de uma string de uma origem para um destino (copiou maria eduarda para dentro do
    array de char "nome")*/
    printf("nome: %s\n", pessoa.nome);

    printf("dados sobreescritos:\n");
    printf("%d %d %s", pessoa.cpf, pessoa.rg, pessoa.nome); // printa normalmente a variavel com maiores bytes

    return 0;
}