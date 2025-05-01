#include <stdio.h>

int main(){

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};
    int linhah = 2;
    int colunah = 4;
    int navio = 3;
    int linhav = 5;
    int colunav = 5;
    int linhad = 0;
    int colunad = 0;

      // Posiciona os navio antes de imprimir o tabuleiro
      if (colunah + navio <= 10) {
        for (int i = 0; i < navio; i++) {
            tabuleiro[linhah][colunah + i] = 3;
        }
    }
    
      if(linhav + navio <= 10){
        for(int j = 0; j < navio; j++){
            tabuleiro[linhav + j][colunav] = 3;
        }
      }  

      if(colunad + navio <= 10 && linhad + navio <= 10){
        for(int k = 0; k < navio; k++){
            tabuleiro[linhad + k][colunad + k] = 3;
        }
      }
      
    printf("##JOGO DE BATALHA NAVAL##\n");

    for(int i = 0; i < 10; i++){
        printf("%c ", letras[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }


    return 0;
}