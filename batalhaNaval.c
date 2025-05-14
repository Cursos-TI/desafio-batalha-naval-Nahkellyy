#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Declarando a Matriz
    int tabuleiro[10][10];    
    char letras[] = "ABCDEFGHIJ";

    printf("TABULEIRO BATALHA NAVAL\n");
        // adicionando 0 (agua)
     for (int i = 0; i < 10; i++) 
     {  for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }    
    }
    //posicinando os navios
    tabuleiro[1][2] = 3;    
    tabuleiro[1][3] = 3;
    tabuleiro[1][4] = 3;    
    tabuleiro[7][8] = 3;    
    tabuleiro[8][8] = 3;

    printf("    ");
    
    for (int j = 0; j < 10; j++) 
    { 
        printf("%d ", j);    
    }    
    printf("\n");
    //Mostrando na tela
    for (int i = 0; i < 10; i++) 
    {
        printf(" %c  ", letras[i]);        
        for (int j = 0; j < 10; j++) 
            {
                 printf("%d ", tabuleiro[i][j]);
            }        
            printf("\n");   
    }
}
    

