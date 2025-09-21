/*
 * PAAII - Projeto e Analise de Algoritmos II
 * A Missao no Edificio Joao Calvino
 *
 * Integrantes:
 * Bruna Amorim Maia RA10431883
 * Rafael Araujo Cabral Moreira RA10441919
 *
 * Descricao: Este programa utiliza a estrategia de backtracking com uma funcao recursiva
 * para encontrar um caminho em um mapa 2D, obedecendo regras de movimento
 * especificas para encontrar a "chave" (*).
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Definicao de uma constante para o tamanho maximo do mapa
#define MAX_SIZE 100

// Variavel global para armazenar a largura do mapa (numero de colunas)
int largura_mapa;

// Funcao recursiva com backtracking para encontrar a chave
bool encontrarChave(char mapa[MAX_SIZE][MAX_SIZE], int n, int i, int j) {
    // === CONDICOES DE PARADA ===
    
    // Condicao de parada 1: verifica se a posicao atual esta fora dos limites do mapa
    if (i < 0 || i >= n || j < 0 || j >= largura_mapa) {
        return false;
    }

    // Condicao de parada 2: se a posicao ja foi visitada, retorna falso
    if (mapa[i][j] == '.') {
        return false;
    }

    // Condicao de parada 3: se a posicao atual e a chave, a solucao foi encontrada
    if (mapa[i][j] == '*') {
        return true;
    }
    
    // Armazena o tipo de corredor para o backtracking (restauracao do estado)
    char tipo_corredor = mapa[i][j];
    
    // === REQUISITOS DA BUSCA ===

    // Marca a posicao atual como visitada
    mapa[i][j] = '.';

    // Variavel para controlar se a chave foi encontrada em alguma das chamadas recursivas
    bool chave_encontrada = false;

    if (tipo_corredor == 'H') {
        // Regra de movimento H: tenta ir para a esquerda OU para a direita
        chave_encontrada = encontrarChave(mapa, n, i, j - 1) || encontrarChave(mapa, n, i, j + 1);
    } else if (tipo_corredor == 'V') {
        // Regra de movimento V: tenta ir para cima OU para baixo
        chave_encontrada = encontrarChave(mapa, n, i - 1, j) || encontrarChave(mapa, n, i + 1, j);
    }

    // === REQUISITO DE BACKTRACKING ===
    
    // Se a chave nao foi encontrada a partir desta posicao, o algoritmo "volta atras" restaurando a celula ao seu estado original
    if (!chave_encontrada) {
        mapa[i][j] = tipo_corredor;
    }

    return chave_encontrada;
}

int main() {
    int n, linha_inicial, coluna_inicial;
    char mapa[MAX_SIZE][MAX_SIZE];

    // Leitura da entrada de dados
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", mapa[i]);
    }
    scanf("%d %d", &linha_inicial, &coluna_inicial);

    // Obtem a largura do mapa para a validacao de limites
    largura_mapa = strlen(mapa[0]);

    // Inicia a busca a partir da posicao inicial
    if (encontrarChave(mapa, n, linha_inicial, coluna_inicial)) {
        // Saida formatada para o caso de sucesso
        printf("Chave encontrada no Edificio Joao Calvino!\n");
    } else {
        // Saida formatada para o caso de falha
        printf("Nao conseguimos encontrar a chave no Edificio Joao Calvino.\n");
    }

    return 0;
}