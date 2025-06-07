#include <stdio.h>

// Número de casas que cada peça vai se mover
int casasTorre = 5;
int casasBispo = 5;
int casasRainha = 8;

// ---------- TORRE (RECUSIVA) ----------
void moverTorreDireita(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorreDireita(casas - 1);
}

// ---------- BISPO (RECUSIVO) ----------
void moverBispoDiagonalRec(int casas) {
    if (casas == 0) return;
    printf("Cima Direita\n");
    moverBispoDiagonalRec(casas - 1);
}

// ---------- BISPO (LOOPS ANINHADOS) ----------
void moverBispoComLoops(int casas) {
    for (int i = 0; i < casas; i++) {
        printf("Vertical: Cima\n");
        for (int j = 0; j < casas; j++) {
            printf("Horizontal: Direita\n");
        }
    }
}

// ---------- RAINHA (RECUSIVA) ----------
void moverRainhaEsquerda(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainhaEsquerda(casas - 1);
}

// ---------- CAVALO (LOOPS COMPLEXOS) ----------
void moverCavalo() {
    printf("\nMovimento do Cavalo:\n");
    int maxY = 8, maxX = 8;
    
    for (int y = 2; y < maxY; y++) {             // linha
        for (int x = 0; x < maxX - 1; x++) {      // coluna
            if ((y - 2 >= 0) && (x + 1 < maxX)) {
                printf("Cavalo: Cima-Cima, Direita -> (%d, %d)\n", y - 2, x + 1);
            } else {
                continue;
            }

            if (x > 3) break;  // controle de fluxo com break
        }
    }
}

// ---------- FUNÇÃO PRINCIPAL ----------
int main() {

    // ---------- MOVIMENTO DA TORRE ----------
    printf("Movimento da Torre:\n");
    moverTorreDireita(casasTorre);

    // ---------- MOVIMENTO DO BISPO ----------
    printf("\nMovimento do Bispo (Recursivo):\n");
    moverBispoDiagonalRec(casasBispo);

    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    moverBispoComLoops(casasBispo);

    // ---------- MOVIMENTO DA RAINHA ----------
    printf("\nMovimento da Rainha:\n");
    moverRainhaEsquerda(casasRainha);

    // ---------- MOVIMENTO DO CAVALO ----------
    moverCavalo();

    return 0;
}
