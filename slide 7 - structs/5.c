/*Um ponto no espaço é representado por uma coordenada x, uma coordenada y e uma coordenada z.

Crie uma struct para representar um ponto.
Declare três variáveis para v1, v2 e v3 do tipo criado para representar os pontos (1,0,5), (3,3,3) e (0,10,0).
Exiba a coordenada y dos três pontos.
Some 10 unidades na coordenada z dos três pontos.
Exiba as três coordenadas de v2.*/
# include <stdio.h>

struct ponto{
    int x;
    int y;
    int z;
};

int main(){
    struct ponto v1 = {1, 0, 5};
    struct ponto v2 = {3, 3, 3};
    struct ponto v3 = {0, 10, 0};

    printf("coordenada y de v1: %d\n", v1.y);
    printf("coordenada y de v2: %d\n", v2.y);
    printf("coordenada y de v3: %d\n", v3.y);

    // soma na coordenada z
    v1.z += 10;
    v2.z += 10;
    v3.z += 10;

    printf("========================\n");
    printf("coordenada z dos três pontos alterada: \n");
    printf("v1: %d, v2: %d, v3: %d\n", v1.z, v2.z, v3.z);
    printf("========================\n");
    printf("v2 = (%d, %d, %d)", v2.x, v2.y, v2.z);
    
    return 0;
}