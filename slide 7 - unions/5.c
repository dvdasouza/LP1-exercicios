#include <stdio.h>

struct animal{
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
    struct animal axolote, lagartixa, arara_azul, tigre, baleia_azul, serpente; // instancias (variaveis)

    axolote.tipo = 1; // anfibio
    axolote.animais.anfibios.patas = 4;
    axolote.animais.anfibios.espessura_pele = 1; // mm
    axolote.animais.anfibios.possuiCauda = 1;

    lagartixa.tipo = 4; // reptil
    lagartixa.animais.repteis.venenoso = 0;
    lagartixa.animais.repteis.autonomiaDebaixodagua = 18; // min
    lagartixa.animais.repteis.espessuraOvos = 1; // cm

    arara_azul.tipo = 2; // ave
    arara_azul.animais.aves.comprimento_bico = 7; // cm
    arara_azul.animais.aves.autonomia_voo = 120; // min
    arara_azul.animais.aves.frequencia_canto = 100; // hz

    tigre.tipo = 3; // mamifero
    tigre.animais.mamiferos.Qtnddentes = 30;
    tigre.animais.mamiferos.volumeCerebro = 200; // estimado em cm³
    tigre.animais.mamiferos.velocidadeterrestre = 65; // km/h

    baleia_azul.tipo = 3; // mamifero
    baleia_azul.animais.mamiferos.Qtnddentes = 0;
    baleia_azul.animais.mamiferos.volumeCerebro = 7000; // cm³
    baleia_azul.animais.mamiferos.velocidadeterrestre = 0;

    serpente.tipo = 4; // reptil
    serpente.animais.repteis.venenoso = 1;
    serpente.animais.repteis.autonomiaDebaixodagua = 30; // min
    serpente.animais.repteis.espessuraOvos = 3; // cm
    
    // exibiçao dos dados
    printf("axolote (anfibio)\n");
    printf("patas: %d | espessura pele: %d mm | cauda: %d\n",axolote.animais.anfibios.patas, axolote.animais.anfibios.espessura_pele,
    axolote.animais.anfibios.possuiCauda);
    
    printf("lagartixa (reptil)\n");
    printf("venenoso: %d | autonomia debaixo d'agua: %d min | espessura ovos: %d mm\n", lagartixa.animais.repteis.venenoso,
    lagartixa.animais.repteis.autonomiaDebaixodagua,lagartixa.animais.repteis.espessuraOvos);

    printf("arara azul (ave)\n");
    printf("comprimento bico: %d cm | autonomia de voo: %d min | frequencia canto: %d hz\n", arara_azul.animais.aves.comprimento_bico,
    arara_azul.animais.aves.autonomia_voo, arara_azul.animais.aves.frequencia_canto);

    printf("tigre (mamifero)\n");
    printf("dentes: %d | volume cerebro: %d cm³ | velocidade terrestre: %d km/h\n", tigre.animais.mamiferos.Qtnddentes,
    tigre.animais.mamiferos.volumeCerebro, tigre.animais.mamiferos.velocidadeterrestre);

    printf("baleia azul (mamifero)\n");
    printf("dentes: %d | volume cerebro: %d cm³ | velocidade terrestre: %d km/h\n", baleia_azul.animais.mamiferos.Qtnddentes,
    baleia_azul.animais.mamiferos.volumeCerebro, baleia_azul.animais.mamiferos.velocidadeterrestre);

    printf("serpente (reptil)\n");
    printf("venenoso: %d | autonomia debaixo d'agua: %d min | espessura ovos: %d mm\n",serpente.animais.repteis.venenoso, 
    serpente.animais.repteis.autonomiaDebaixodagua,serpente.animais.repteis.espessuraOvos);

    return 0;
}