/*Crie uma função que leia um personagem (use a struct do exercício anterior).
A função deve usar uma função que lê a posição.
Crie um loop para ler todos os 10 personagens
Desenhe um mapa do jogo.
Use funções auxiliares!
Exemplo:
   0 1 2 3 4 5 6 7 8 9

0          8
1    0
2 
3              3
4 
5                  7
6      2
7 
8          9
9                  5*/
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
// le uma posição (x,y)
struct posicao ler_posicao() {
    struct posicao p;
    printf("digite x (0-%d): ", N-1);
    scanf("%d", &p.x); // le x
    printf("digite y (0-%d): ", N-1);
    scanf("%d", &p.y); // le y
    return p; // retorna posiçao preenchida
}
// le um personagem
struct personagem ler_personagem(int identidade) {
    struct personagem p;
    p.numero = identidade; // identificacao do personagem
    printf("\nPERSONAGEM #%d\n", identidade);
    p.lugar = ler_posicao();
    p.pontuacao = 0; // inicia com 0
    return p; // retorna personagem
}

void ler_todos(struct personagem v[], int n){ // função para preencher um vetor de personagens
    for (int i = 0; i < n; i++) {
        v[i] = ler_personagem(i);  // chama ler_personagem para cada posicao do vetor
    }
}

int main(){
    struct personagem personagens[N];

    // lê todos os personagens
    ler_todos(personagens, N);

    // desenha o mapa
    desenhar_mapa(personagens, N);

    return 0;
}