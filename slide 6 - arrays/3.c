#include <stdio.h>

void preenche(int tamanho, int matriz[tamanho][tamanho]){
    printf("insira os valores da matriz %dx%d:\n", tamanho, tamanho);
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            printf("[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
    }
    }
}
float determinante(int tamanho, int matriz[tamanho][tamanho]){
    float determinante = 0;

    if (tamanho == 1){// se 1x1 o determinante é o próprio número
        determinante = matriz[0][0];
    }

    else if (tamanho == 2){// se 2x2 formula normal (ad bc)
        determinante = (matriz[0][0] * matriz[1][1]) - (matriz[0][1] * matriz[1][0]);
    }

    else if (tamanho == 3){ // se 3x3 usa sarrus
        determinante =  matriz[0][0]*matriz[1][1]*matriz[2][2]
             + matriz[0][1]*matriz[1][2]*matriz[2][0]
             + matriz[0][2]*matriz[1][0]*matriz[2][1]
             - matriz[0][2]*matriz[1][1]*matriz[2][0]
             - matriz[0][0]*matriz[1][2]*matriz[2][1]
             - matriz[0][1]*matriz[1][0]*matriz[2][2];
    }

    return determinante;
}

int main(){
    int tamanho;

    printf("insira o tamanho da matriz (2 = 2x2 ou 3 = 3x3): ");
    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho]; // cria matriz quadrada
    preenche(tamanho, matriz);

    float resultado = determinante(tamanho, matriz);

    printf("\no determinante é: %.2f\n", resultado);

    return 0;
}