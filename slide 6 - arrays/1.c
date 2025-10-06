/*Crie uma função preenche que receba um array bidimensional arr de inteiros com uma dimensão fixa (LxC), e 
preencha o array com l*c números lidos do teclado:
void preenche (int arr[L][C], int l, int c);*/
#include <stdio.h>

void preenche(int l, int c,int arr[l][c]){
    int i, j; // variaveis linhas e colunas
    for (i = 0; i < l; i++){ // percorre linhas
        for (j = 0; j < c; j++){ 
            scanf("%d", &arr[i][j]);
    }
}
}

int main(){
    int l, c;
    printf("insira o numero de linhas e colunas: ");
    scanf("%d %d", &l, &c);

    int arr[l][c]; // matriz com tamanho variavel

    printf("insira os elementos:\n");
    preenche(l, c, arr);

    printf("\nmatriz:\n");
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf("%d ", arr[i][j]);
    }
        printf("\n");
    }
    return 0;
}