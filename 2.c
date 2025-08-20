// Faça um programa que leia dois valores e exiba o maior valor lido.
# include <stdio.h>

int main(){
    int a,b;
    printf("digite o primeiro valor: ");
    scanf("%d", &a);
    printf("digite o segundo valor: ");
    scanf("%d", &b);

    if(a > b){
        printf("o maior valor é o: %d\n", a);
    }
    else if ( b > a){
        printf("o maior valor é o: %d\n", b);
    }
return 0;
}