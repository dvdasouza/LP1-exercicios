#include <stdio.h>

void preenche(int l, int c,int arr[l][c]){
    int i, j; // variaveis linhas e colunas
    for (i = 0; i < l; i++){ // percorre linhas
        for (j = 0; j < c; j++){ // percorre colunas
            scanf("%d", &arr[i][j]); // le um valor e armazena na posiçao [i][j]
    }
    }   
}

float media(int l, int c, int arr[l][c]){ // calcula media dos valores da matriz
    int soma = 0;
    int total = 0; // total elementos

    for (int i = 0; i < l; i++){ // percorre pela matriz (linhas e colunas)
        for (int j = 0; j < c; j++){
            soma += arr[i][j];
            total++; // conta mais um elemento
    }
    }

    return (float)soma / total;
}

int main(){
    int l, c;

    printf("insira o número de linhas e colunas: ");
    scanf("%d %d", &l, &c);

    int arr[l][c]; // matriz com tamanho variável

    preenche(l, c, arr);

    float resultado = media(l, c, arr); //chama funcao media e guarda o valor na variável "resultado"

    printf("\na média dos valores é: %.2f\n", resultado);

    return 0;
}
