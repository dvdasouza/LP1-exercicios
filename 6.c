// Faça um programa que leia um número N e calcule o somatório a seguir: somatorio de N i = 1 i^2

# include <stdio.h>

int main(){
    int n;
    int elevado;
    int somatorio = 0;

    printf("digite um numero: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++){ // i++ incrementa (5 vira 6)
        elevado = i * i;
        somatorio += elevado;
    }
    printf("o somatório é: %d", somatorio);

    return 0;
}