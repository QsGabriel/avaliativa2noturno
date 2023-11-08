#include <stdio.h>
#include <string.h>

void imprimirResultado(char* nome_time, float forca_time) {
    printf("%s: %.2f de forca\n", nome_time, forca_time);
}

int main() {
    char nomes_jogadores[12][30];
    char posicoes_jogadores[12];
    int forcas_jogadores[12];
    char nome_time_1[30], nome_time_2[30];
    float forca_time_1 = 0.0, forca_time_2 = 0.0;

    scanf("%[^\n]%*c", nome_time_1);

    int i = 0;
    while (i < 11) {
        scanf("%[^;];%c;%d%*c", nomes_jogadores[i], &posicoes_jogadores[i], &forcas_jogadores[i]);

        if (posicoes_jogadores[i] == 'G') {
            forca_time_1 += 0.08 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'L') {
            forca_time_1 += 0.10 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'Z') {
            forca_time_1 += 0.05 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'V') {
            forca_time_1 += 0.08 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'M') {
            forca_time_1 += 0.11 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'A') {
            forca_time_1 += 0.12 * forcas_jogadores[i];
        }

        i++;
    }

    scanf("%[^\n]%*c", nome_time_2);

    i = 0;
    while (i < 11) {
        scanf("%[^;];%c;%d%*c", nomes_jogadores[i], &posicoes_jogadores[i], &forcas_jogadores[i]);

        if (posicoes_jogadores[i] == 'G') {
            forca_time_2 += 0.08 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'L') {
            forca_time_2 += 0.10 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'Z') {
            forca_time_2 += 0.05 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'V') {
            forca_time_2 += 0.08 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'M') {
            forca_time_2 += 0.11 * forcas_jogadores[i];
        } else if (posicoes_jogadores[i] == 'A') {
            forca_time_2 += 0.12 * forcas_jogadores[i];
        }

        i++;
    }

    imprimirResultado(nome_time_1, forca_time_1);
    imprimirResultado(nome_time_2, forca_time_2);

    if (forca_time_1 > forca_time_2) {
        printf("%s eh mais forte\n", nome_time_1);
    } else {
        printf("%s eh mais forte\n", nome_time_2);
    }

    return 0;
}
