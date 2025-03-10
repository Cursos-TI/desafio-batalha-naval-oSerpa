#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // matriz com zeros
    int linha1 = 2, coluna1 = 3; // Navio 1
    int linha2 = 3, coluna2 = 7; // Navio 2
    int soma2 = 1;

    // Navio 1 na horizontal
    for (int i = 0; i < 3; i++) { 
        tabuleiro[linha1][coluna1 + i] = 3;
    }

    // Navio 2 na vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[linha2 + i][coluna2] = 3; // posição do navio sera igual a '3'
    }
    

    // Exibir o tabuleiro
    printf("    A B C D E F G H I J\n");

    for (int i = 0; i < 10; i++) { //colunas
        printf(" %2d ", soma2);
        for (int j = 0; j < 10; j++) { //linhas
            printf("%d ", tabuleiro[i][j]); // imprime o tabuleiro
        }
        soma2++;
        printf("\n");
    }

    return 0;
};