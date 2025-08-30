/*Crie uma função todos_os_primos que recebe um inteiro max e exibe todos os primos entre 1 e max.

Use a função eh_primo do exercício anterior sem alterá-la.*/
#include <stdio.h>

// prototipos das funçoes
int eh_primo(int divisores);   // funçao do exercicio 1
int eh_primo_div(int inteiro); // funçao adaptada pra calcular os divisores e nao alterar a funçao do exercicio 1
void todos_os_primos(int max);

int main()
{
    int inteiro;
    printf("insira um número: ");
    scanf("%d", &inteiro);
    todos_os_primos(inteiro); // chamando funçao

    return 0;
}

// funçao do exercicio 1
int eh_primo(int divisores)
{
    return divisores == 2; //
}

// funçao que calcula os divisores
int eh_primo_div(int inteiro)
{
    int divisores = 0;
    for (int i = 1; i <= inteiro; i++)
    {
        if (inteiro % i == 0)
        {                // verifica se a operaçao nao deixou resto, ou seja, é divisivel
            divisores++; // incrementa +1 divisor
        }
    }
    return eh_primo(divisores);
}

// função inteiro ate max
void todos_os_primos(int max)
{
    for (int i = 2; i <= max; i++)
    {
        if (eh_primo_div(i)) // ve se i é primo chamando a funçao adaptada
            printf("%d ", i);
    }
}