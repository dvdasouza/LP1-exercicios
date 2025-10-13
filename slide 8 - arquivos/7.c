#include <stdio.h>

struct pessoa{
    int idade;
    char nome[64];
    float peso;
};

    void preencher(struct pessoa *p){
    printf("nome: ");
    scanf("%s", p->nome);

    printf("idade: ");
    scanf("%d", &p->idade);

    printf("peso: ");
    scanf("%f", &p->peso);
    }

void escrever_pessoa(FILE *f, struct pessoa *p){
    fwrite(p, sizeof(struct pessoa),1,f);
    }

void ler_pessoa(FILE *f, struct pessoa *p){
    fread(p, sizeof(struct pessoa),1, f);
}

int main(){
    struct pessoa vetor[10];
    FILE *f;

    for (int i = 0; i < 10; i++){
        printf("PESSOA #%d\n",i+1);
        preencher(&vetor[i]);
    }

    // escrever no arquivo
    f = fopen("pessoas.bin", "wb");
    fwrite(vetor, sizeof(struct pessoa),10, f);
    fclose(f);
    printf("\npessoas gravadas!\n");

    // ler arquivo
    struct pessoa lidas[10];
    f = fopen("pessoas.bin", "rb");
    fread(lidas, sizeof(struct pessoa),10,f);

    fclose(f);

    printf("pessoas lidas:\n");
    for (int i = 0; i < 10; i++){
        printf("nome: %s\nidade: %d\npeso: %.2f\n",lidas[i].nome,lidas[i].idade, lidas[i].peso);
    }
    
    return 0;
}