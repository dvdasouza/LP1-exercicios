/*Crie uma struct qualquer.
Seja criativo!
Crie uma função preenche que receba um ponteiro para uma variável da struct criada e leia os campos para a variável passada. Exemplo:
struct T t;
preenche(&t);
printf("A=%d, B=%d\n", t.a, t.b);*/
# include <stdio.h>

struct provas{
    float p1;
    float p2;
}; 

void preenche(struct provas* nota){

    printf("insira a nota da prova #1: ");
    scanf("%f", &nota->p1);
    printf("insira a nota da prova #2: ");
    scanf("%f", &nota->p2);

}

int main(){
    struct provas aluno; // cria variavel 
    preenche(&aluno); // passa funcao

    printf("\n");
    printf("nota da prova #1: %.2f\nnota da prova #2: %.2f", aluno.p1, aluno.p2);

    return 0;
}