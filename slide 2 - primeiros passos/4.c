// manter sempre uma velocidade entre 80 e 100 quilômetros por hora (kph). Sabe-se que que 1 milha tem aproximadamente 1.6 quilômetros 
//Crie um programa que leia a velocidade atual do carro em mph e escreva na tela ACELERE, DESACELERE ou MANTENHA.
// milha por hora

# include <stdio.h>

int main(){
    float vel_atual;
    float conversao; // converte km pra milha

    printf("insira a velocidade atual do veículo: ");
    scanf("%f", &vel_atual);
    conversao = vel_atual / 1.6;

    if (vel_atual < 80){
        printf("velocidade atual: %.2f milhas por hora\nACELERE!", conversao);
    }
    if (vel_atual > 100){
        printf("velocidade atual: %.2f milhas por hora\nDESACELERE!", conversao);
    }
    if (vel_atual >= 80 && vel_atual <= 100){
        printf("velocidade atual: %.2f milhas por hora\nMANTENHA!", conversao);
    }

    return 0;
}