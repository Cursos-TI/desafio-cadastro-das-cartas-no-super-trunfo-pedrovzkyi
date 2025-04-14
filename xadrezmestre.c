#include <stdio.h>
// Função para mover a Torre
void movertorre(int casas){
    if(casas > 0){
        printf("Direita\n");
        movertorre(casas - 1);// Chamada recursiva para continuar o movimento
    }
}
// Função para mover o Bispo
void moverbispo(int movimentos) {
    for (int i = 0; i < movimentos; i++) { // Loop externo controla o número de movimentos
        for (int j = 0; j < 1; j++) { // Loop interno simula o movimento diagonal
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}
void moverrainha(int casas){
    if(casas > 0){
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}
// Função para mover o Cavalo
void movercavalo(int vertical, int horizontal){
    for (int i = 0; i < vertical; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < horizontal; j++) {
        printf("Direita\n");
    }
}

int main(){
// Movimento da Torre
printf("Movimento da torre:\n");
movertorre(5); // Move a Torre 5 casas para a direita
printf("\n");

// Movimento do Bispo
printf("Movimento do bispo:\n");
moverbispo(5); // Move o Bispo 5 vezes em diagonal (Cima e Direita)
printf("\n");

// Movimento da Rainha
printf("Movimento da rainha:\n");
moverrainha(8); // Move a Rainha 8 casas para a esquerda
printf("\n");

// Movimento do Cavalo
printf("Movimento do cavalo:\n");
movercavalo(2, 1); // Move o Cavalo em "L" (2 casas para cima e 1 para a direita)


    return 0;
}
