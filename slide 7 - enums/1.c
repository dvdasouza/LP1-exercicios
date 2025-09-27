/*Crie uma enumeração enum Dia para representar os dias da semana.
Crie uma função nome que recebe um dia da semana e retorna uma string correspondente:
char* nome (enum Dia) { ... }
Por exemplo, a chamada printf("%s\n", nome(Ter)) deve exibir Terca na tela.*/
#include <stdio.h>

enum dia{
    domingo,
    segunda,
    terca,
    quarta,
    quinta,
    sexta
};

char* nomes_dias[] = {"domingo", "segunda", "terça", "quarta", "quinta", "sexta"};

char* nome(enum dia d){ // d é o dia que vai ser passado para a funçao
    return nomes_dias[d]; // retorna  nome correspondente ao num do dia
}
int main() {
    enum dia hoje = quinta;
    printf("hoje é: %s\n", nome(hoje));
    return 0;
}
