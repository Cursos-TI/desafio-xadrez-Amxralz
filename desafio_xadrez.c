#include <stdio.h>

int main() {
    // Declaração de variáveis
    int i;
    int contador = 0;
    
    printf("=== Simulação de Movimentos no Xadrez ===\n\n");
    
    // Movimento da Torre (usando for)
    printf("Movimento da Torre (5 casas para a direita):\n");
    for(i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    contador = 0;
    while(contador < 5) {
        printf("Cima, Direita\n");
        contador++;
    }
    printf("\n");
    
    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while(contador < 8);
    
    return 0;
} 