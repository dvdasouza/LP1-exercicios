// exercicio 7 de unions com enum
#include <stdio.h>

enum tipo_avaliacao{
    notas,
    conceito
};

struct provas{
    float p1;
    float p2;
}; 

struct avaliacao{
    enum tipo_avaliacao tipo;
    union{
      struct provas notas; // armazena as duas notas
      char conceito;
    }dados;
};

void preenche(struct avaliacao *n){
    n->tipo = notas; // guardando notas

    printf("insira a nota da prova #1: ");
    scanf("%f", &n->dados.notas.p1); // acessa o membro dado da struct apontada por N
    printf("insira a nota da prova #2: ");
    scanf("%f", &n->dados.notas.p2);

    float media = (n->dados.notas.p1 + n->dados.notas.p2)/2.0;

    if(media >= 8.5){
        n->tipo = conceito;
        n->dados.conceito = 'A';
    }  else if(media >= 7.0){
        n->tipo = conceito;
        n->dados.conceito = 'B';
    } else{
        n->tipo = conceito;
        n->dados.conceito = 'C';
    }
    printf("o aluno tirou conceito: %c", n->dados.conceito);
}
int main(){
    struct avaliacao aluno;
    preenche(&aluno);
    return 0;
    }