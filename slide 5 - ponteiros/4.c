/*Crie uma função troca que receba dois ponteiros para inteiros p1 e p2 e troque os conteúdos por eles apontados:
int x=10, y=20;
troca(&x, &y);              // definir essa funcao
printf("%d %d\n", x, y);    // 20 10*/
# include <stdio.h>

void troca(int *p1, int *p2){
    int guarda;
    guarda = *p1; // guarda valor de p1
    *p1 = *p2; // troca o valor de a para o de b
    *p2 = guarda; // p2 guarda o valor que estava em "guarda"

}
int main(){
    int a;
    int b;

    printf("insira a: ");
    scanf("%d", &a);
    printf("insira b: ");
    scanf("%d", &b);
    
    troca(&a,&b); // vai receber os endereços de a e b

    printf("======================\n");
    printf("a = %d\nb = %d", a,b);

    return 0;
}