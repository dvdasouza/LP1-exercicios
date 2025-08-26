// Um aluno de LP1 está indo aos Estados Unidos e quer comprar um celular novo. Ele não quer gastar mais do que 1000 reais. 
// Um dólar está custando 3.17 reais. Faça um programa que leia o preço de um celular em dólares e, caso seja um bom negócio, 
//escreva BOM NEGÓCIO.

# include <stdio.h>
int main(){
    float celular_dol;
    float conversao;

    printf("insira o preço do celular em dolares: ");
    scanf("%f", &celular_dol);

    conversao = celular_dol * 3.17;
    if (conversao <= 1000){
        printf("valor em reais: %.2f\nBOM NEGÓCIO!", conversao);
    }
    if (conversao > 1000){
        printf("valor em reais: %.2f\nNão é um bom negócio!", conversao);
    }
    return 0;
}