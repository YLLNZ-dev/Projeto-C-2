#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main() {
    int opcao;

    // imprimindo cabeçalho do menu inicial
    printf("\n\n");
    printf("=====================================\n");
    printf("          MENU DE JOGOS             \n");
    printf("=====================================\n");
    printf("Escolha um jogo para jogar:\n");
    printf("(1) Jogo de Adivinhação\n");
    printf("(2) Jogo da forca\n");
    printf("(0) Sair\n\n");
    printf("Escolha: ");

    scanf("%d", &opcao);

    // usando switch para lidar com a escolha do jogador
    switch(opcao) {
        case 1:
            

            return 0;
            break;
        case 2:
            
            return 0;
            break;
        case 0:
            printf("Saindo do menu. Até a próxima!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}