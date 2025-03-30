#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int movimentoBispo = 1, movimentoTorre = 1, movimentoRainha = 1; 

    printf("### BISPO ###\n"); //IMPRIME O TITULO DA PEÇA
    for(movimentoBispo; movimentoBispo <= 5; movimentoBispo++) //IMPRIME E INCREMENTA ATÉ A VARIAVEL DO BISPO ATINGIR
    {
        //IMPRIME O MOVIMENTO DO BISCO
        printf("Direita\n");
        printf("Cima\n");
    }

    printf("\n### TORRE ###\n"); //IMPRIME O TITULO DA PEÇA
    while(movimentoTorre <= 5)
    {
        printf("Direita\n"); //IMPRIME OS MOVIMENTOS DA TORRE
        movimentoTorre++; //INCREMENTA A VARIAVEL DE MOVIMENTO DA TORRE
    }

    printf("\n### RAINHA ###\n"); //IMPRIME O TITULO DA PEÇA
    
    do
    {
        printf("Esquerda\n"); //IMPRIME O MOVIMENTO DA RAINHA
        movimentoRainha++; //INCREMENTO NA VARIAVEL DE MOVIMENTO DA RAINHA
    } while(movimentoRainha <= 8); //VERIFICA A CONDIÇÃO APÓS A PRIMEIRA EXECUÇÃO

    return 0;
}
