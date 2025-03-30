#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int movimentoBispo, movimentoCavalo, movimentoTorre = 1, movimentoRainha = 1; 

    printf("### BISPO ###\n"); //IMPRIME O TITULO DA PEÇA
    for(movimentoBispo = 1; movimentoBispo <= 5; movimentoBispo++) //IMPRIME E INCREMENTA ATÉ A VARIAVEL DO BISPO ATINGIR
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

    printf("\n### CAVALO ###\n"); //IMPRIME O TITULO DA PEÇA

    for(movimentoCavalo = 1; movimentoCavalo <=1; movimentoCavalo++) //IMPRIME E INCREMENTA O MOVIMENTO DO CAVALO UMA VEZ
    {   
        int i = 1;// VARIAVEL INTERNA PRA CONTAGEM
        // IMPRIME "BAIXO" DUAS VEZES ANTES DE SEGUIR PARA A PRÓXIMA LINHA
        do 
        {
            printf("Baixo\n"); //IMPRIME "BAIXO"
            i++;
        }while( i <= 2); // ENQUANTO "I" FOR MENOR QUE 2 IMPRIME
        printf("Esquerda\n"); //APOS A FINALIZAR O DO WHILE IMPRIME "ESQUERDA" FINALIZANDO O MOVIMENTO DO CAVALO
    }

    return 0;
}
