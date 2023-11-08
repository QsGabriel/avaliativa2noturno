#include <stdio.h>
#include <string.h>

void exibirMatriz(int m[4][4]) {
    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            printf("%4d", m[l][c]);
        }
        printf("\n");
    }
}

int main() {
    int matrizA[4][4];
    int matrizB[4][4];
    int matrizResultado[4][4];
    char operacao[5];
    char soma[] = "soma";
    char subtracao[] = "sub";
    char multiplicacao[] = "mult";

    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            scanf("%d", &matrizA[l][c]);
        }
    }

    for (int l = 0; l < 4; l++) {
        for (int c = 0; c < 4; c++) {
            scanf("%d", &matrizB[l][c]);
        }
    }

    scanf("%s", operacao);

    if (strcmp(operacao, soma) == 0) {
        for (int l = 0; l < 4; l++) {
            for (int c = 0; c < 4; c++) {
                matrizResultado[l][c] = matrizA[l][c] + matrizB[l][c];
            }
        }
    } else if (strcmp(operacao, subtracao) == 0) {
        for (int l = 0; l < 4; l++) {
            for (int c = 0; c < 4; c++) {
                matrizResultado[l][c] = matrizA[l][c] - matrizB[l][c];
            }
        }
    } else if (strcmp(operacao, multiplicacao) == 0) {
        for (int l = 0; l < 4; l++) {
            for (int c = 0; c < 4; c++) {
                matrizResultado[l][c] = 0;
                for (int k = 0; k < 4; k++) {
                    matrizResultado[l][c] += matrizA[l][k] * matrizB[k][c];
                }
            }
        }
    } else {
        printf("Operacao invalida\n");
        return 1;
    }

    exibirMatriz(matrizResultado);

    return 0;
}
