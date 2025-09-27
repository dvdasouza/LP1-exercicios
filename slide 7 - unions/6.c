#include <stdio.h>

union ponto{
struct{ // struct anonima
    int x;
    int y;
    int z;
    };
    int vetor[3];
};

int main(){
    union ponto pt;

    pt.vetor[0] = 10;
    pt.vetor[1] = 20;
    pt.vetor[2] = 30;

    printf("(%d, %d, %d)\n", pt.x, pt.y, pt.z);

}