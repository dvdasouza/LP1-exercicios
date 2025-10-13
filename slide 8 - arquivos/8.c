// programa agora calcula o tamanho do nome inserido e escreve apenas as letras usadas
#include <stdio.h>
#include <string.h>

struct pessoa{
    int idade;
    char nome[64];
    float peso;
};

void preencher(struct pessoa *p){
    printf("nome: ");
    scanf("%63s", p->nome);

    printf("idade: ");
    scanf("%d", &p->idade);

    printf("peso: ");
    scanf("%f", &p->peso);
}

void escrever_pessoa(FILE *f, struct pessoa *p){
    int tamanho_nome = strlen(p->nome); // mede o tamanho real do nome
    fwrite(&tamanho_nome, sizeof(int), 1, f);
    fwrite(p->nome, sizeof(char), tamanho_nome, f); // escreve só as letras do nome
    fwrite(&p->idade, sizeof(int), 1, f); //escreve idade
    fwrite(&p->peso, sizeof(float), 1, f);
}

void ler_pessoa(FILE *f, struct pessoa *p){
    int tamanho_nome;
    fread(&tamanho_nome, sizeof(int), 1, f); // lê o tamanho
    fread(p->nome, sizeof(char), tamanho_nome, f); // le as letras
    p->nome[tamanho_nome] ='\0';// terminador
    fread(&p->idade, sizeof(int),1,f);
    fread(&p->peso, sizeof(float),1,f);
}

int main(){
    struct pessoa vetor[10];
    FILE *f;

    for (int i = 0; i < 10; i++){
        printf("\nPESSOA #%d\n", i+1);
        preencher(&vetor[i]);
}

    // escrever no arquivo
    f = fopen("pessoas.bin", "wb");
    for (int i = 0; i < 10; i++){
        escrever_pessoa(f, &vetor[i]);
}
    fclose(f);
    printf("pessoas gravadas!\n");

    // ler arquivo
    struct pessoa lidas[10];
    f = fopen("pessoas.bin", "rb");
    for (int i = 0; i < 10; i++){
        ler_pessoa(f, &lidas[i]);
    }
    fclose(f);

    printf("pessoas lidas:\n");
    for (int i = 0; i < 10; i++){
        printf("\nnome: %s\nidade: %d\npeso: %.2f\n",lidas[i].nome, lidas[i].idade, lidas[i].peso);
    }

    return 0;
}