/*baseado no exercício 1, crie uma função preencheB que leia as propriedades de um personagem para o valor apontado pelo ponteiro recebido
*/
# include <stdio.h>

    struct personagem{
        int forca;
        int energia;
        int exp;
    };

    void preencheB (struct personagem* p){ // funcao recebe ponteiro para personagem (p1, p2)

        printf("insira a força: ");
        scanf("%d", &p ->forca); // -> é ponteiro para struct
        
        printf("insira a energia: ");
        scanf("%d", &p ->energia);

        printf("insira a experiencia: ");
        scanf("%d", &p ->exp);

    }
    int main(void){
        struct personagem p1; // variavel personagem 1
        preencheB(&p1); // chama funçao passando o endereço de p1 (struct personagem* p) 

        struct personagem p2;
        preencheB(&p2);

        printf("(%d, %d, %d) vs (%d, %d, %d)\n", p1.forca, p1.energia, p1.exp, p2.forca, p2.energia, p2.exp);

        return 0;
}