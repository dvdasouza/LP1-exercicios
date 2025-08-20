/*Ler dois números n1 e n2
Exibir todos os números entre n1 e n2
Fazer em Python e em C*/
# include <stdio.h>
int main(){
    int n1;
    int n2;
    int menor = 0;
    int maior = 0;

    printf("insira um numero: ");
    scanf("%d", &n1);
    printf("insira um numero: ");
    scanf("%d", &n2);

// bloco pra percorrer um intervalo sem me importar c a ordem q o user inseriu os numeros
    if(n1 < n2){
        menor = n1;
        maior = n2;
    }
    else{
        maior = n1;
        menor = n2;
    }

    for (int i = menor; i <= maior; i++){ //começa do menor pro maior I começa no maior; enquanto for vdd o laço roda; soma 1 ao i
        printf("%d ", i);
    }
    return 0;
}