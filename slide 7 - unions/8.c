/*Altere o exemplo 5 para incluir propriedades em comum a todas as classes de animais, tais como nome da espécie e cor predominate.

Atualize os exemplos para funcionarem com a nova representação.*/

#include <stdio.h>

struct animal{
    char nome[49];
    char cor[49];
    int tipo; // 1 = anfibios, 2 = aves, 3 = mamiferos, 4 = repteis
union{ // structs dentro da union para apenas uma struct ser acessada por vez
    struct{
        int patas;
        int espessura_pele;
        int possuiCauda; // 1 = sim e 0 = nao
    } anfibios;

    struct {
        int comprimento_bico;
        int autonomia_voo;
        int frequencia_canto;
    } aves;

    struct{
        int Qtnddentes;
        int volumeCerebro;
        int velocidadeterrestre;
    } mamiferos;

    struct{
        int venenoso; // 1 = sim e 0 = nao
        int autonomiaDebaixodagua;
        int espessuraOvos;
    } repteis;

    } animais; // nome da union
};

int main(){
    struct animal axolote = {"axolote", "rosa", 1, .animais.anfibios = {4, 1, 1}};
    struct animal lagartixa = {"lagartixa", "verde", 4, .animais.repteis = {0, 18, 1}};
    struct animal arara_azul = {"arara-azul", "azul", 2, .animais.aves = {7, 120, 100}};
    struct animal tigre = {"tigre", "laranja com branco e listras pretas", 3, .animais.mamiferos = {30, 200, 65}};
    struct animal baleia_azul = {"baleia azul", "azul", 3, .animais.mamiferos = {0, 7000, 0}};
    struct animal serpente = {"serpente", "marrom", 4, .animais.repteis = {1, 30, 3}};
    
    // exibiçao dos dados
    printf("%s (%s) (anfibio)\n", axolote.nome, axolote.cor);
    printf("patas: %d | espessura pele: %d mm | cauda: %d\n\n",axolote.animais.anfibios.patas, axolote.animais.anfibios.espessura_pele,
    axolote.animais.anfibios.possuiCauda);
    
    printf("%s (%s)\n", lagartixa.nome, lagartixa.cor);
    printf("venenoso: %d | autonomia debaixo d'agua: %d min | espessura ovos: %d mm\n\n", lagartixa.animais.repteis.venenoso,
    lagartixa.animais.repteis.autonomiaDebaixodagua,lagartixa.animais.repteis.espessuraOvos);

    printf("%s (%s)\n", arara_azul.nome, arara_azul.cor);
    printf("comprimento bico: %d cm | autonomia de voo: %d min | frequencia canto: %d hz\n\n", arara_azul.animais.aves.comprimento_bico,
    arara_azul.animais.aves.autonomia_voo, arara_azul.animais.aves.frequencia_canto);

    printf("%s (%s)\n", tigre.nome, tigre.cor);
    printf("dentes: %d | volume cerebro: %d cm³ | velocidade terrestre: %d km/h\n\n", tigre.animais.mamiferos.Qtnddentes,
    tigre.animais.mamiferos.volumeCerebro, tigre.animais.mamiferos.velocidadeterrestre);

    printf("%s (%s)\n", baleia_azul.nome, baleia_azul.cor);
    printf("dentes: %d | volume cerebro: %d cm³ | velocidade terrestre: %d km/h\n\n", baleia_azul.animais.mamiferos.Qtnddentes,
    baleia_azul.animais.mamiferos.volumeCerebro, baleia_azul.animais.mamiferos.velocidadeterrestre);

    printf("%s (%s)\n", serpente.nome, serpente.cor);
    printf("venenoso: %d | autonomia debaixo d'agua: %d min | espessura ovos: %d mm\n\n",serpente.animais.repteis.venenoso, 
    serpente.animais.repteis.autonomiaDebaixodagua,serpente.animais.repteis.espessuraOvos);

    return 0;
}