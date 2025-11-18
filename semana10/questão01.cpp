#include <iostream>

using namespace std;

// Constantes para as dimensões
const int TAMANHO_TABULEIRO = 15;

/**
 * @brief Verifica o que foi atingido em uma determinada posição (linha, coluna).
 *
 * @param matriz Ponteiro para ponteiro para a matriz 2D (int**).
 * @param linha Linha do tiro (0 a 14).
 * @param coluna Coluna do tiro (0 a 14).
 */
void Checar(int **matriz, int linha, int coluna) {
    
    // O acesso direto matriz[linha][coluna] é seguro com int**
    int valor = matriz[linha][coluna];

    if (valor == 1) {
        cout << "destroier" << endl;
    } else if (valor == 2) {
        cout << "fragata" << endl;
    } else if (valor == 3) {
        cout << "lancha" << endl;
    } else if (valor == 0) {
        cout << "agua" << endl;
    }
}

// -----------------------------------------------------------

int main() {
    
    // 1. ALOCAÇÃO DINÂMICA DA MATRIZ 2D (Ponteiro para Ponteiro)
    
    // Aloca as 15 "linhas" (ponteiros)
    int **matriz = new int*[TAMANHO_TABULEIRO]; 
    
    // Aloca as 15 "colunas" para cada linha
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        matriz[i] = new int[TAMANHO_TABULEIRO];
    }
    
    // 2. LEITURA DA MATRIZ
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            // Acesso seguro e padrão para leitura
            cin >> matriz[i][j];
        }
    }

    // 3. PROCESSAMENTO DOS 3 TIROS
    for (int k = 0; k < 3; k++) {
        int linha_tiro, coluna_tiro;

        // Leitura da linha e coluna do tiro (Entrada de 1 a 15, conforme OBS1)
        cin >> linha_tiro >> coluna_tiro;

        // Ajuste para o índice base-zero (0 a 14)
        int linha_ajustada = linha_tiro - 1;
        int coluna_ajustada = coluna_tiro - 1;

        // Chamada da função para verificar o acerto
        Checar(matriz, linha_ajustada, coluna_ajustada);
    }

    // 4. LIBERAÇÃO DA MEMÓRIA
    // Libera as colunas de cada linha
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        delete[] matriz[i];
    }
    // Libera o array de ponteiros das linhas
    delete[] matriz;
    
    return 0;
}