#include <stdio.h>

int main() {
    
    int casasBaixo = 2;    
    int casasEsquerda = 1; 
    
    // Primeiro movimento: duas casas para baixo
    printf("\nMovimento do Cavalo:\n");
    
    // Loop for para mover duas casas para baixo
    for(int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");
    }
    
    // Loop while para mover uma casa para esquerda
    int contador = 0;
    while(contador < casasEsquerda) {
        printf("Esquerda\n");
        contador++;
    }
    
    return 0;
}
