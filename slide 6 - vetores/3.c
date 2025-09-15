#include <stdio.h>

// função que preenche a matriz
void preenche(int l, int c, int arr[l][c]) {
    int i, j;
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("insira o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }}
// função que calcula a média
float media(int l, int c, int arr[l][c]) {
    int i, j;
    int soma = 0;
    int total = l * c;

    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            soma = soma + arr[i][j];
        }
    }
    return (float) soma / total; // converter soma pra float antes da divisao (type casting)
}
int main() {
    int l, c;
    int i, j;

    printf("insira o numero de linhas: ");
    scanf("%d", &l);

    printf("insira o numero de colunas: ");
    scanf("%d", &c);

    int matriz[l][c]; // matriz com o tamanho q o user escolheu
    preenche(l, c, matriz); // chama a função preenche
    float m = media(l, c, matriz); // chama função media

    // mostra matriz
    printf("matriz:\n");
    for (i = 0; i < l; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("media = %f\n", m);

    return 0;
}