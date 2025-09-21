/*OBS: professor, nao tem a parte de mostrar qual é o ponto mais distante pois eu nao consegui pensar em um jeito de
fazê-la. peço desculpas*/
# include <stdio.h>

struct guardar_ponto{
    int x;
    int y;
};

void preenche(struct guardar_ponto* p){ // preenche um ponto

    printf("insira x: ");
    scanf("%d", &p->x);
    printf("insira y: ");
    scanf("%d", &p->y);
}

void preenche_vetor(struct guardar_ponto v[], int n) { // funcao que preenche vetor de pontos
    for (int i = 0; i < n; i++) {
        printf("ponto %d:\n", i+1);
        preenche(&v[i]);
    }
}
int main (){
    struct guardar_ponto vetor[10];

    preenche_vetor(vetor, 10);

    printf("PONTOS PREENCHIDOS\n"); // exibe todos os pontos preenchidos
    for (int i = 0; i < 10; i++) {
        printf("ponto %d: (%d, %d)\n", i+1, vetor[i].x, vetor[i].y);
    }

    return 0;
}