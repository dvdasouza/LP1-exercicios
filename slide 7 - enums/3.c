/*Crie um novo tipo Boolean com somente os valores true e false. Faça o tipo ser compatível com a noção já concebida de booleano de C.*/
#include <stdio.h>

enum boolean{
    true = 1, // sempre q usar true, vai ser substituido por 1
    false = 0 // sempre q usar false, vai ser substituido por 0 (pq 0 em C é considerado falso)
};

int main(){
    enum boolean a = true;
    enum boolean b = false;

    if(a){
        printf("a é verdadeiro\n");
    } else{
        printf("a é falso\n");
    }
    if(b){
        printf("b é verdadeiro\n");
    } else{
        printf("b é falso\n");
    }

    return 0;
}
