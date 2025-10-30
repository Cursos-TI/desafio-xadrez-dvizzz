#include <stdio.h>

int main() {

    //Declarando as variaveis
    int torre = 0;
    int bispo;
    int rainha = 0;

    // Mover a Torre cinco casas para a direita

    // Imprime a mensagem "Movimentação da Torre"
    printf("Movimentação da Torre:\n");

    // Usando a estrutura de repetição while para representar a movimentação da Torre
    while (torre < 5)
    {
        printf("Cima\n"); // Imprime a direção da peça
        torre++; // Usando o incremento para evitar um loop infinito
    }

    // Mover o Bispo cinco casas na diagonal para cima e à direita

    // Imprime a mensagem "Movimentação do Bispo"
    printf("Movimentação do Bispo:\n");

    // Usando a estrutura de repetição for para representar a movimentação do Bispo
    for (bispo = 0; bispo < 5; bispo++)
    {
        printf("Direita, Cima\n"); // Imprime a direção da peça
    }

    // Mover a Rainha oito casas para a esquerda

    // Imprime a mensagem "Movimentação da Rainha"
    printf("Movimentação da Rainha:\n");

    // Usando a estrutura de repetição do while para representar a movimentação da Torre
    do
    {
        printf("Esquerda\n"); // Imprime a direção da peça
        rainha++;
    } while (rainha < 8);
    

    return 0;
}
