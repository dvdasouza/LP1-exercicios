#include <stdio.h>

struct preco{ // discriminador (indicar qual moeda está em uso)
    int tipo; // 1 = reais, 2 = dolares, 3 = euros
    union{ // union tipo composto sem nome proprio
    float reais;
    float dolares;
    float euros;
    } valor; // nome do membro (memoria que agrupa as 3 variaveis)
};

void exibe(struct preco p){ // acesso tudo da struct preco com a variavel p
    if (p.tipo == 1){ // tipo = 1 preço está em reais
        printf("R$: %.2f\n", p.valor.reais); // dentro da struct p, existe a union valor que contem a variavel reais
    } else if (p.tipo == 2){
        printf("U$: %.2f\n", p.valor.dolares);
    } else if (p.tipo == 3){
        printf("€: %.2f\n", p.valor.euros);
    }
}
void altera (struct preco *p, int novo_tipo){ // ponteiro pra modificar o valor original (converter)
    float valorAtual = 0.0; //temp

    switch (p->tipo){ // le o valor atual antes de mudar
        case 1:
            valorAtual = p->valor.reais;
            break;
        case 2:
            valorAtual = p->valor.dolares;
            break;
        case 3:
            valorAtual = p->valor.euros;
            break;

            return;
    }

    switch (novo_tipo) {
        case 1:
            p->valor.reais = valorAtual;
            break;
        case 2:
            p->valor.dolares = valorAtual;
            break;
        case 3:
            p->valor.euros = valorAtual;
            break;

            return;
    }

    p->tipo = novo_tipo; // atualiza discriminador pra atual tipo ativo
}

int main(){
    struct preco preco1;

    preco1.tipo = 1; // começa em reais
    preco1.valor.reais = 50.0;

    printf("antes da alteração:\n");
    exibe(preco1);

    altera(&preco1, 2); 
    printf("\nalteração para dólares:\n");
    exibe(preco1);

    altera(&preco1, 3); // converte pra euros
    printf("\nalteração para euros:\n");
    exibe(preco1);

    return 0;
}