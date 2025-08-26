// Faça um programa que leia números continuamente até que seja digitado 0. Ao final, o programa deve exibir a soma de 
// todos os números lidos.
# include <stdio.h>

int main(){
    int soma = 0;
    int numeros;

    printf("digite números: "); // precisa ler algo fora do while (inicializa)
    scanf("%d", &numeros);
    while (numeros != 0){
        soma+= numeros;
        printf("digite números: "); // le um valor a cada repetiçao
        scanf("%d", &numeros);
    }
    printf("a soma de todos os números inseridos é: %d", soma);

    return 0;
}