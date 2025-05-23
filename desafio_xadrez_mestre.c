#include <stdio.h>

// Função recursiva para movimento da Torre
void movimentoTorre(int casas) {
    if (casas <= 0) {
        return;
    }
    
    printf("Direita\n");
    movimentoTorre(casas - 1);
}

// Função recursiva para movimento do Bispo
void movimentoBispo(int casas) {
    if (casas <= 0) {
        return;
    }
    
    printf("Diagonal Superior Direita\n");
    movimentoBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void movimentoRainha(int casas) {
    if (casas <= 0) {
        return;
    }
    
    printf("Diagonal Superior Direita\n");
    movimentoRainha(casas - 1);
}

// Função para movimento do Cavalo usando loops complexos
void movimentoCavalo() {
    int i, j;
    
    // Movimento em L: duas casas para cima e uma para direita
    for (i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    
    for (j = 0; j < 1; j++) {
        printf("Direita\n");
    }
}

// Função para movimento do Bispo usando loops aninhados
void movimentoBispoLoops() {
    int i, j;
    
    for (i = 0; i < 3; i++) {
        printf("Cima\n");
        for (j = 0; j < 1; j++) {
            printf("Direita\n");
        }
    }
}

int main() {
    int casas = 3; // Número de casas para movimento recursivo
    
    printf("Movimento da Torre:\n");
    movimentoTorre(casas);
    printf("\n");
    
    printf("Movimento do Bispo (Recursivo):\n");
    movimentoBispo(casas);
    printf("\n");
    
    printf("Movimento da Rainha:\n");
    movimentoRainha(casas);
    printf("\n");
    
    printf("Movimento do Cavalo:\n");
    movimentoCavalo();
    printf("\n");
    
    printf("Movimento do Bispo (Loops Aninhados):\n");
    movimentoBispoLoops();
    
    return 0;
}
