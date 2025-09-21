/*Declare uma struct para representar as características/propriedades de um atleta do seu esporte favorito.
Crie uma função que exiba as propriedades de maneira bem organizada e formatada.
Crie três exemplos de atletas variando as propriedades e teste a função de exibição*/
# include <stdio.h>

struct atleta{
    char nome[50];
    int idade;
    float altura;
    int qtnd_gols;
};

struct atleta lerAtleta(){ // funçao le dados e retorna a struct
    struct atleta a;
    printf("nome do atleta: ");
    scanf("%s", a.nome);

    printf("idade: ");
    scanf("%d", &a.idade);

    printf("altura: ");
    scanf("%f", &a.altura);
    
    printf("quantidade de gols na carreira: ");
    scanf("%d", &a.qtnd_gols);
    
    return a;
}

void exibirAtleta(struct atleta a){ // funçao que exibe os dados

    printf("\n");
    printf("PROPRIEDADES DO ATLETA: \n");
    printf("nome: %s\n", a.nome);
    printf("idade: %d\n", a.idade );
    printf("altura: %.2f\n", a.altura);
    printf("quantidade de gols na carreira: %d\n", a.qtnd_gols);
}

int main(){
    struct atleta a1 = lerAtleta();
    struct atleta a2 = lerAtleta();
    struct atleta a3 = lerAtleta();

    exibirAtleta(a1);
    exibirAtleta(a2);
    exibirAtleta(a3);
}