# PAAII - A Missão no Edifício João Calvino

Um programa em C que utiliza a estratégia de backtracking para encontrar uma chave em um mapa 2D, seguindo regras de movimento específicas.

-----

## 📋 Sobre o Projeto

Este projeto consiste em um programa em C que resolve o problema da "Missão no Edifício João Calvino". O objetivo é encontrar a chave (`*`) em um mapa 2D, seguindo regras de movimento. A solução foi desenvolvida usando a estratégia de **backtracking** por meio de uma função recursiva, conforme os requisitos do projeto.

O programa lê as dimensões do mapa, o próprio mapa e as coordenadas de início, e, ao final, imprime uma mensagem de sucesso ou falha na busca, dependendo do resultado.

### ✨ Funcionalidades

  * **Algoritmo de Backtracking**: O programa usa uma abordagem recursiva para explorar todas as combinações de caminhos possíveis.
  * **Regras de Movimento**: Os movimentos são restritos a corredores horizontais (`H`) e verticais (`V`), e a busca termina ao encontrar a chave (`*`).
  * **Prevenção de Ciclos**: O algoritmo marca as posições já visitadas para evitar loops infinitos.

## 👥 Equipe

| Nome | RA |
| :--- | :--- |
| Bruna Amorim Maia | 10431883 |
| Rafael Araujo Cabral Moreira | 10441919 |

Turma 04N

Prof. Dr. Charles Boulhosa Rodamilans
-----

## ⚙️ Compilação e Execução

Para compilar e executar o programa, use os seguintes comandos no terminal:

1.  **Compilação:**
    ```sh
    gcc -o missao_joaocalvino missao_joaocalvino.c
    ```
2.  **Execução:**
    ```sh
    ./missao_joaocalvino
    ```
    Após a execução, forneça os dados de entrada no formato especificado no problema, como as dimensões do mapa, o próprio mapa e as coordenadas de início.
