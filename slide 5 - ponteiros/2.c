/* Uma compra na internet é efetuada por uma chamada compra(conta,valor). A função recebe um ponteiro para uma conta e um valor 
a ser debitado
Um casal tem duas contas e quer usar a conta com maior saldo para fazer uma compra de 500 reais. Faça um programa que leia o saldo das
  duas contas e efetue a compra corretamente. Ao final, o programa deve exibir os saldos das duas contas.*/
#include <stdio.h>

// funçao 
void compra (int* conta, int valor){

    *conta = *conta - valor; // altera o valor guardado no endereço
}

int main(){
    int minha_conta;
    int minha_conta2;
    int *conta; // aponta pra conta com maior valor
    int valor = 500; // valor a ser debitado

    printf("insira o saldo da primeira conta: ");
    scanf("%d", &minha_conta);
    printf("insira o saldo da segunda conta: ");
    scanf("%d", &minha_conta2);

    if(minha_conta > minha_conta2){
        conta = &minha_conta; // se a conta 1 tiver saldo maior que a 2, o ponteiro vai apontar para o 1
    }
    else{
        conta = &minha_conta2;
    }

    compra(conta, valor);

    printf("====================================\n");
    printf("saldo da primeira conta: %d\nsaldo da segunda conta: %d", minha_conta, minha_conta2);

    return 0;
}