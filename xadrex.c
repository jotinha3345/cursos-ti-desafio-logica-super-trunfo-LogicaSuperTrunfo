#include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {  // Função principal onde o programa começa

    // Número de casas que cada peça vai se mover (definido diretamente no código)
    int casasTorre = 5;     // Torre vai se mover 5 casas
    int casasBispo = 5;     // Bispo vai se mover 5 casas
    int casasRainha = 8;    // Rainha vai se mover 8 casas

    // ---------- MOVIMENTO DA TORRE ----------
    // Simula o movimento da torre 5 casas para a direita
    // Utiliza a estrutura de repetição "for"
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // ---------- MOVIMENTO DO BISPO ----------
    // Simula o movimento do bispo 5 casas na diagonal para cima e à direita
    // Utiliza a estrutura de repetição "while"
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // ---------- MOVIMENTO DA RAINHA ----------
    // Simula o movimento da rainha 8 casas para a esquerda
    // Utiliza a estrutura de repetição "do-while"
    printf("\nMovimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    // ---------- MOVIMENTO DO CAVALO ----------
    // Simula o movimento do Cavalo: duas casas para baixo e uma para a esquerda
    printf("\nMovimento do Cavalo:\n");

    int movimentosParaBaixo = 2;  // Número de casas para baixo
    int movimentosParaEsquerda = 1;  // Número de casas para esquerda

    // Loop externo usando 'for' para as casas para baixo
    for (int k = 0; k < movimentosParaBaixo; k++) {
        printf("Baixo\n");
    }

    // Loop interno usando 'while' para a casa para esquerda
    int l = 0;
    while (l < movimentosParaEsquerda) {
        printf("Esquerda\n");
        l++;
    }

    return 0;
}
