/*Leia dois inteiros a e b. Exiba os valores de a e b. Crie um ponteiro p para a variável com o maior valor. Através de p subtraia 50
 da variável com o maior valor. Exiba os valores de a e b novamente.*/

#include <stdio.h>
int main()
{
    int a;
    int b;
    int *p; // vai apontar pro maior

    printf("insira a: ");
    scanf("%d", &a);
    printf("insira b: ");
    scanf("%d", &b);
    printf("a = %d  b = %d\n", a, b);

    if (a > b){
        p = &a;
    }
    else{
        p = &b;
    }
    *p = *p - 50; // subtrai 50 do valor apontado pelo P

    printf("===================\n");
    printf("a = %d  b = %d", a, b);

    return 0;
}
