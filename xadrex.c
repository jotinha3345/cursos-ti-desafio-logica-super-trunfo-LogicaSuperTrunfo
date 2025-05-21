 #include <stdio.h>  // Biblioteca padrão para entrada e saída de dados

int main() {  // Função principal onde o programa começa

    // Número de casas que cada peça vai se mover (definido diretamente no código)
    int casasTorre = 5;     // Torre vai se mover 5 casas
    int casasBispo = 5;     // Bispo vai se mover 5 casas
    int casasRainha = 8;    // Rainha vai se mover 8 casas

    // ---------- MOVIMENTO DA TORRE ----------
    // Simula o movimento da torre 5 casas para a direita
    // Utiliza a estrutura de repetição "for"
    printf("Movimento da Torre:\n");  // Imprime o título da seção
    for (int i = 0; i < casasTorre; i++) {  // Repetição de 0 até menor que 5
        printf("Direita\n");  // Imprime a direção "Direita" a cada passo
    }

    // ---------- MOVIMENTO DO BISPO ----------
    // Simula o movimento do bispo 5 casas na diagonal para cima e à direita
    // Utiliza a estrutura de repetição "while"
    printf("\nMovimento do Bispo:\n");  // Imprime o título da seção
    int i = 0;  // Inicializa variável de controle
    while (i < casasBispo) {  // Enquanto i for menor que 5
        printf("Cima Direita\n");  // Imprime a direção "Cima Direita"
        i++;  // Incrementa i para avançar para a próxima casa
    }

    // ---------- MOVIMENTO DA RAINHA ----------
    // Simula o movimento da rainha 8 casas para a esquerda
    // Utiliza a estrutura de repetição "do-while"
    printf("\nMovimento da Rainha:\n");  // Imprime o título da seção
    int j = 0;  // Inicializa variável de controle
    do {
        printf("Esquerda\n");  // Imprime a direção "Esquerda"
        j++;  // Incrementa j
    } while (j < casasRainha);  // Repete enquanto j for menor que 8

    return 0;  // Indica que o programa terminou com sucesso
}
