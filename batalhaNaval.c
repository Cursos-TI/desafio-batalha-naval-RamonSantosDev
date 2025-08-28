#include <stdio.h>

int main() {
    
    char linhas[10] = {'A','B','C','D','E','F','G','H','I','J'};//vetor
    int tabuleiro[10][10] = {0};


    printf(" TABULEIRO BATALHA NAVAL \n");
    printf("  ");

   for (int i = 0; i < 10; i++)// coloca as letras de A até o J nomeado as colunas
   {
    printf("%2c", linhas[i]); 
   }
    printf("\n");

    for(int j = 3; j <= 5; j++){// Navio horizontal
        tabuleiro[2][j] = 3; // A linha é Fixa e a coluna vai percorre index 3 4 5.
    }

    for(int i = 4; i <= 6; i++){// Navio na vertical
        tabuleiro[i][7] = 3;// A coluna é fixa e a linha percorre index 4 5 6.
    }

    for(int i = 4, j = 1; i <= 6, j <= 3; i++, j++){// dois controle no mesmo for para fazer a diagonal esqueda

        tabuleiro[i][j] = 3;

    }

    for(int i = 1, j = 9; i <= 3, j >= 7; i++, j--){//dois controle no mesmo for para fazer a diagonal direita
        tabuleiro[i][j] = 3;
    }

    for (int i = 1; i <= 10; i++)
    {
        printf("%2d ", i);// numera as linhas do 1 até 10

        for (int j = 0; j < 10; j++)//pecorre a Matriz
        { 
            printf("%2d", tabuleiro[i-1][j]);  
        }
        printf("\n");
    }

    printf(" COORDENADAS DO NAVIO \n");

    for(int i = 0; i < 10; i++){

        for(int j = 0; j < 10; j++){

            if(tabuleiro[i][j] == 3){
                printf("%c%d\n", linhas[j], i+1);
            }
        }//Linhas[j] dar a letra da coluna i+1 dar um numero da linha
    }



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
