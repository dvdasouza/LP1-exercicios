// Crie uma função eh_primo que recebe um inteiro n e retorna se ele é primo ou não.

#include <stdio.h>

// prototipo da funçao
int eh_primo(int divisores);

int main()
{
    int inteiro;
    int divisores = 0;

    printf("insira um número: ");
    scanf("%d", &inteiro);

    for (int i = 1; i <= inteiro; i++)
    {
        if (inteiro % i == 0){ // verifica se a operaçao nao deixou resto, ou seja, é divisivel
            divisores++; // incrementa +1 divisor
        }
    }

    // chama funçao
    if (eh_primo(divisores))
    {
        printf("%d é primo!", inteiro);
    }
    else
    {
        printf("%d nao é primo!", inteiro);
    }

    return 0;
}

// função
int eh_primo(int divisores)
{
    if (divisores == 2)
    {
        return 1; // divisivel por 1 e por ele mesmo apenas, vai retornar true (primo)
    }
    else
    {
        return 0; // se nao, vai retornar false (nao é primo)
    }
}