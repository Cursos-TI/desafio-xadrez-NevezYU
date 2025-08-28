#include <stdio.h>

// Função recursiva da TORRE
// Move-se horizontalmente para a direita
void moverTorre(int casas) {
    if (casas <= 0) return; // caso base da recursão
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Função recursiva do BISPO
// Move-se na diagonal "Cima e Direita"
// Implementa também loops aninhados: externo vertical, interno horizontal
void moverBispo(int casas) {
    if (casas <= 0) return; // caso base
    // loop externo: movimento vertical
    for (int i = 0; i < 1; i++) {  // apenas 1 passo vertical por chamada recursiva
        // loop interno: movimento horizontal
        for (int j = 0; j < 1; j++) { // apenas 1 passo horizontal por chamada recursiva
            printf("Cima, Direita\n");
        }
    }
    moverBispo(casas - 1); // chamada recursiva
}

// Função recursiva da RAINHA
// Move-se horizontalmente para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return; // caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Movimento complexo do CAVALO
// Em "L": 2 casas para cima + 1 casa para a direita
// Usa loops aninhados com múltiplas variáveis, continue e break
void moverCavalo() {
    int verticalPassos = 2;  
    int horizontalPassos = 1; 

    for (int v = 0; v < verticalPassos; v++) {
        
        printf("Cima\n");
    }

    int h = 0;
    while (h < horizontalPassos) {
        printf("Direita\n");
        h++;
        if (h >= horizontalPassos) break; 
    }
}

int main() {
    // Definindo o número de casas que cada peça deve se mover
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;

    printf("Movimentação de Peças de Xadrez\n\n");
     // Movimentos recursivos
    printf("Movimento da Torre:\n");
    moverTorre(Torre);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(Bispo);
    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(Rainha);
    printf("\n");
    
    // Movimento complexo do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();
    printf("\n");

    return 0;
}