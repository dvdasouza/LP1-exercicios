/*Uma vitória vale 3 pontos, um empate vale 1 ponto e uma derrota vale 0 pontos. Escreva um programa que, para cada time, 
leia o nome (ou um identificador numérico), número de vitórias, número de empates e número de derrotas.
Ao final, o programa deve escrever os nomes (ou identificadores) dos times com mais e menos pontos até o momento.*/

# include <stdio.h>

int main(){
    int vitorias, empate, derrota;
    char time[5][21]; // times (5) armazenados; cadeia de char (string) suporta ate 20 chars
    int pontos[5]; // vetor pra guardar pontos dos times
    int temp;

    for(int i = 0; i < 5; i++){
        printf("digite um time: ");
        scanf("%s", time[i]);
        printf("vitorias: ");
        scanf("%d", &vitorias);
        printf("empates: ");
        scanf("%d", &empate);
        printf("derrotas: ");
        scanf("%d", &derrota);
        pontos[i] = vitorias * 3  + empate * 1; // i indice do vetor
    }

    for(int i = 0; i <= 5;i++){ // 
        for(int j = 0; j < 4; j++){ // comparaçao dos elementos (times)
            if(pontos[j] < pontos[j+1]){ // compara se o valor atual é menor q o proximo (ex: 7 e 3)
                temp = pontos[j]; // guarda valor (7)
                pontos[j] = pontos[j+1]; // guarda (3)
                pontos[j+1] = temp; // recebe o valor guardado (7)

            // ordenaçao dos times (array de char)
            char tempTime;
            int k;
                for(k = 0; k < 22; k++){
                    tempTime = time[j][k];
                    time[j][k] = time[j+1][k];
                    time[j+1][k] = tempTime;
                }
            }
        }
    }
        printf("=============================\n");
        for(int i = 0; i< 5;i++){
            printf("%s - %d\n", time[i], pontos[i]);
    }

    return 0;
}