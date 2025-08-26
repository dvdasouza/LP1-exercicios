/*Crie um vetor para guardar 50 temperaturas:
int temps[50];
As temperaturas variam entre -100 e 100.
Leia as 50 temperaturas para o vetor
Calcule a média das temperaturas no vetor
Exiba a quantidade de leituras acima da média calculada
Em vez de int, use o tamanho mais econômico
(Mas lembre-se que o "%d" do scanf só funciona com o tipo int.)*/
#include <stdio.h>

int main()
{

    signed char temps[5];
    int soma = 0;
    int acima = 0;
    float media;
    int i;

    for (int i = 0; i < 5; i++)
    {
        printf("temperatura %d: ", i + 1);
        scanf("%hhd", &temps[i]); // hhd pra signed char
        soma += temps[i];
    }

    media = soma / 5.0;

    for (i = 0; i < 5; i++)
    {
        if (temps[i] > media)
        {
            acima++;
        }
    }

    printf("a média é: %.2f\n", media);
    printf("leituras acima da média: %d", acima);

    return 0;
}