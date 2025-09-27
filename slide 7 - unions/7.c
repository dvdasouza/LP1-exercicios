// usuario insere as notas da p1 e p2 e é avaliado por conceito A, B ou C
#include <stdio.h>

struct provas{
    float p1;
    float p2;
}; 

struct avaliacao{
    int tipo; // 1 = guardando notas 2 = guardando conceito
    union{
      struct provas notas; // armazena as duas notas
      char conceito;
    }dados;
};

void preenche(struct avaliacao *n){
    n->tipo = 1; // guardando notas

    printf("insira a nota da prova #1: ");
    scanf("%f", &n->dados.notas.p1); // acessa o membro dado da struct apontada por N
    printf("insira a nota da prova #2: ");
    scanf("%f", &n->dados.notas.p2);

    float media = (n->dados.notas.p1 + n->dados.notas.p2)/2.0;

    if(media >= 8.5){
        printf("o aluno tirou conceito: A");
    }
    else if (media >= 7.0 && media < 8.5){
        printf("o aluno tirou conceito: B"); // conceito b
    }
    else{
        printf("o aluno tirou conceito: C"); // conceito C
    }
}
int main() {
    struct avaliacao aluno;
    preenche(&aluno);
    return 0;
    }