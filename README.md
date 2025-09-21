# PAAII - A Missão no Edifício João Calvino

\<p align="center"\>
\<em\>Um programa em C que utiliza a estratégia de backtracking para encontrar uma chave em um mapa 2D, seguindo regras de movimento específicas.\</em\>
\</p\>

-----

## 📋 Sobre o Projeto

[cite\_start]Este projeto consiste em um programa em C que resolve o problema da "Missão no Edifício João Calvino"[cite: 1]. [cite\_start]O objetivo é encontrar a chave (`*`) em um mapa 2D[cite: 2]. [cite\_start]A solução foi desenvolvida usando a estratégia de **backtracking** por meio de uma função recursiva, conforme os requisitos do projeto[cite: 3].

[cite\_start]O programa lê as dimensões do mapa, o próprio mapa e as coordenadas de início, e, ao final, imprime uma mensagem de sucesso ou falha na busca[cite: 7].

### ✨ Funcionalidades

  * [cite\_start]**Algoritmo de Backtracking**: O programa usa uma abordagem recursiva para explorar todos os caminhos possíveis no mapa[cite: 4].
  * [cite\_start]**Regras de Movimento**: Os movimentos são restritos a corredores horizontais (`H`) e verticais (`V`)[cite: 5]. [cite\_start]A busca é finalizada quando a chave (`*`) é encontrada[cite: 5].
  * [cite\_start]**Prevenção de Ciclos**: O algoritmo marca as posições já visitadas para evitar que a busca entre em loops infinitos[cite: 6].

## 👥 Equipe


| Nome                       | RA        |
| -------------------------- | --------- |
| Bruna Amorim Maia          | 10431883  |
| Rafael Araujo Cabral Moreira | 10441919  |

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
    [cite\_start]Após a execução, forneça os dados de entrada no formato especificado no problema, como as dimensões do mapa, o próprio mapa e as coordenadas de início[cite: 7, 8].
