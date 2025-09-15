# include <stdio.h>

// função preenche
void preenche(int *xs, int n){
    for (int i = 0; i <n; i++){
        printf("digite o numero #%d: ", i+1);
        scanf("%d", xs+i); // endereço do elemento i
    }
}

// funçao media 
double media(int *xs, int n){
    int soma = 0;
    for (int i = 0; i < n; i++){
        soma+= *(xs+i); // valor do elemento na posiçao i
    }
    return (double)soma/n;
}

int main(){
    int vec[50];
    int n;

    printf("insira a qntd de numeros: ");
    scanf("%d", &n);
    preenche(vec,n); // chama funçao preenche pra preencher o vetor

    double m = media(vec,n); // calcula media
    printf("====================\n");
    printf("média: %lf\n", m);

    return 0;
}