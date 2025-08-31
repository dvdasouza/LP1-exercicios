/*Agora, o casal tem uma lista de compras a efetuar: int compras[] = { 100, 50, 80, 30, 20 };
Faça um programa que leia o saldo das duas contas e efetue as compras corretamente, sempre usando a conta com o maior saldo. 
A cada compra, o programa deve exibir os saldos das duas contas.*/
# include <stdio.h>

// funçao 
void compra (int* conta, int valor){

    *conta = *conta - valor;
}

int main(){
    int minha_conta;
    int minha_conta2;
    int *conta; // aponta pra conta com maior valor
    int compras[] = { 100, 50, 80, 30, 20 };
    int n = 5;

    printf("insira o saldo da primeira conta: ");
    scanf("%d", &minha_conta);
    printf("insira o saldo da segunda conta: ");
    scanf("%d", &minha_conta2);

    for(int i = 0; i < n; i++){ // debita a cada compra
    if(minha_conta > minha_conta2){ // escolhe a conta com maior saldo
        conta = &minha_conta;
    }
    else{
        conta = &minha_conta2;
    }

    compra(conta, compras[i]);

    printf("====================================\n");
    printf("saldos depois da compra de %d:\n", compras[i]);
    printf("primeira conta: %d\nsegunda conta: %d\n", minha_conta, minha_conta2);
}
    return 0;
}