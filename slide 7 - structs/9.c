# include <stdio.h>

struct posicao{
    int x;
    int y;
};
struct personagem{
    int numero; // identidade 
    struct posicao lugar; // (x,y)
    int pontuacao;
};

int main(){
    struct personagem personagens[10]; // vetor com 10 personagens
    for (int i = 0; i <10; i++){
        personagens[i].numero = i+1; // atualiza indice
        personagens[i].lugar.x = 0;
        personagens[i].lugar.y = 0;
        personagens[i].pontuacao = 0;
}
    // exibe os personagens
    for (int i = 0; i < 10; i++){
        printf("personagem #%d, posição (%d,%d), pontuação: %d\n",
            personagens[i].numero,
            personagens[i].lugar.x,
            personagens[i].lugar.y,
            personagens[i].pontuacao);
    }
    return 0;
}