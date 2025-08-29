#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
int main() {
    
    char linhas[10] = {'A','B','C','D','E','F','G','H','I','J'};//vetor
    int tabuleiro[LINHAS][COLUNAS] = {0};


    printf(" TABULEIRO BATALHA NAVAL \n");
    

   for (int i = 0; i < LINHAS; i++)// coloca as letras de A até o J nomeado as colunas
   {
    printf("%2c", linhas[i]); 
   }
    printf("\n");

    for(int j = 3; j <= 5; j++){// Navio horizontal
        tabuleiro[0][j] = 3; // A linha é Fixa e a coluna vai percorre index 3 4 5.
    }

    for(int i = 4; i <= 6; i++){// Navio na vertical
        tabuleiro[i][9] = 3;// A coluna é fixa e a linha percorre index 4 5 6.
    }

    for(int i = 4, j = 0; i <= 6, j <= 2; i++, j++){// dois controle no mesmo for para fazer a diagonal esqueda

        tabuleiro[i][j] = 3;

    }

    for(int i = 1, j = 9; i <= 3, j >= 7; i++, j--){//dois controle no mesmo for para fazer a diagonal direita
        tabuleiro[i][j] = 3;
    }

    // habilidade em cone
    for(int i = 7; i <= 9; i++)//for externo percorre as linhas de 7 a 9
    {
        for(int j = 0; j < COLUNAS; j++)//for interno percorre as colunas da matriz completa
        {
            if(i == 7 && j == 7){// primeira condição 5 sozinho

                tabuleiro[i][j] = 1;

            }else if (i == 8 && (j >= 6 && j <= 8))//segunda condição i fixo e J de 6 a 8
            {
                tabuleiro[i][j] = 1;

            }else if (i == 9 && (j >= 5 && j <= 9)){// terceira condição i fixo e j de 5 a 9
                tabuleiro[i][j] = 1;
            }
            
        }
    }

    //habilidade em cruz:
    for(int i = 7; i <= 9; i++)//for externo percorre as linhas de 7 a 9
    {
        for (int j = 0; j < COLUNAS; j++)//for interno percorre as colunas da matriz completa
        {
            if (i == 8 && (j >= 0 && j <= 4))// primeira condição i é fixo no 8 e as colunas de 0 a 4
            {
                tabuleiro[i][j] = 1;

            }else if (i == 7 && j == 2)//segunda condição i = 7 e j = 2 
            {

                tabuleiro[i][j] = 1;

            }else if (i == 9 && j == 2)//Terceira condição i = 9 e j = 2
            {

                tabuleiro[i][j] = 1;

            }
            
        }
        
    }

    //habilidade em octaedro
    for(int i = 2; i <= 4; i++)//for externo percorre as linhas de 7 a 9
    {
        for (int j = 0; j < COLUNAS; j++)//for interno percorre as colunas da matriz completa
        {
            if (i == 3 && (j >= 3 && j <= 5))// primeira condição i é fixo no 8 e as colunas de 0 a 4
            {
                tabuleiro[i][j] = 1;

            }else if (i == 2 && j == 4)//segunda condição i = 2 e j = 4 
            {

                tabuleiro[i][j] = 1;

            }else if (i == 4 && j == 4)//Terceira condição i = 4 e j = 4
            {

                tabuleiro[i][j] = 1;

            }
            
        }
        
    }







    for (int i = 1; i <= LINHAS; i++)
    {
        printf("%2d ", i);// numera as linhas do 1 até 10

        for (int j = 0; j < COLUNAS; j++)//pecorre a Matriz
        { 
            printf("%2d", tabuleiro[i-1][j]);  
        }
        printf("\n");
    }

    printf("\n COORDENADAS DO NAVIO \n");

    for(int i = 0; i < LINHAS; i++){

        for(int j = 0; j < COLUNAS; j++){

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
