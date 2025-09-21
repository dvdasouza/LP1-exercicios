# include <stdio.h> 
struct personagem{
    int forca;
    int energia;
    int experiencia;
};

    int main(void){
        struct personagem p1;
            p1.forca = 10;
            p1.energia = 50;
            p1.experiencia = 30;
        
        struct personagem p2 = {18, 20, 25};
        printf("personagem 1:\nforça: %d\nenergia: %d\nexperiencia: %d\n", p1.forca, p1.energia, p1.experiencia);
        printf("==============================\n");
        printf("personagem 2:\nforça: %d\nenergia: %d\nexperiencia: %d\n", p2.forca, p2.energia, p2.experiencia);
    }