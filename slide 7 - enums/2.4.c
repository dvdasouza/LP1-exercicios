// exercicio 4 de unions com enum
#include <stdio.h>

enum moeda{
    reais,
    dolares,
    euros
};

struct preco{
    enum moeda tipo; // discriminador enum
    union{
    float reais;
    float dolares;
    float euros;
    } valor;
};

void exibe(struct preco p){
    if (p.tipo == reais){
        printf("R$: %.2f\n", p.valor.reais);
    } else if (p.tipo == dolares){
        printf("U$: %.2f\n", p.valor.dolares);
    } else if (p.tipo == euros){
        printf("€: %.2f\n", p.valor.euros);
    }
}
void altera (struct preco *p, enum moeda novo_tipo){
    float valorAtual = 0.0; //temp

    switch (p->tipo){
        case reais:
            valorAtual = p->valor.reais;
            break;
        case dolares:
            valorAtual = p->valor.dolares;
            break;
        case euros:
            valorAtual = p->valor.euros;
            break;

            return;
    }

    switch (novo_tipo) {
        case reais:
            p->valor.reais = valorAtual;
            break;
        case dolares:
            p->valor.dolares = valorAtual;
            break;
        case euros:
            p->valor.euros = valorAtual;
            break;

            return;
    }

    p->tipo = novo_tipo;
}

int main(){
    struct preco preco1;

    preco1.tipo = reais; // começa em reais
    preco1.valor.reais = 50.0;

    printf("antes da alteração:\n");
    exibe(preco1);

    altera(&preco1, dolares); 
    printf("\nalteração para dólares:\n");
    exibe(preco1);

    altera(&preco1, euros);
    printf("\nalteração para euros:\n");
    exibe(preco1);

    return 0;
}