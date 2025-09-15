# include <stdio.h>

int main(){
    int vet[5];
    for (int i = 0; i < 5; i++){
    printf("insira o numero #%d: ", i+1);
    scanf("%d", &vet[i]);
}
    for (int i = 0; i < 5; i++){
        printf("| %d | ", vet[i]);
    }

    // outro numero
    int I;
    printf("\ninsira um indice de 0 a 4 para remover: ");
    scanf("%d", &I);
       
    if (I >= 0 && I < 5) {
        for (int i = I; i < 4; i++) {
            vet[i] = vet[i+ 1];  // desloca
        }
        vet[4] = 0;  // ultima posicao é preenchida com 0
    }
    printf("\nvetor modificado: ");
    for(int i = 0; i < 5; i++){
        printf("| %d | ", vet[i]);
    }
    return 0;
}