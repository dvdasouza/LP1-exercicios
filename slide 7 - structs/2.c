# include <stdio.h>
    struct personagem{
        int forca;
        int energia;
        int experiencia;
    }; // struct sempre termina com ponto e virgula

    struct personagem preenche(void){ // funçao sem parametro
        struct personagem p;  // p é um personagem que guarda força energia e exp

        printf("insira a força: ");
        scanf("%d", &p.forca);

        printf("insira a energia: ");
        scanf("%d", &p.energia);

        printf("insira a experiencia: ");
        scanf("%d", &p.experiencia);

        return p; // retorna dados da struct
    }

    int main (void) { // p1 e p2 vao armazenar um personagem completo
        struct personagem p1 = preenche(); // preenche chama funcao e preenche os dados
        struct personagem p2 = preenche();

        printf("(%d, %d, %d) vs (%d, %d, %d)\n",

            p1.forca, p1.energia, p1.experiencia,
            p2.forca, p2.energia, p2.experiencia);

    return 0;
}