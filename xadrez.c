#include <stdio.h>

int main() {
    int n, i;
    int pontosA = 0, pontosB = 0;

    printf("Quantas peças cada jogador terá? ");
    scanf("%d", &n);

    int forcaA[n], forcaB[n];

    printf("Digite as forças das peças do Jogador A:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &forcaA[i]);
    }

    printf("Digite as forças das peças do Jogador B:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &forcaB[i]);
    }

    for(i = 0; i < n; i++) {
        if(forcaA[i] > forcaB[i]) {
            pontosA++;
        } else if(forcaB[i] > forcaA[i]) {
            pontosB++;
        }
    }

    printf("\nResultado:\n");
    if(pontosA > pontosB) {
        printf("Jogador A venceu com %d pontos!\n", pontosA);
    } else if(pontosB > pontosA) {
        printf("Jogador B venceu com %d pontos!\n", pontosB);
    } else {
        printf("Empate! Ambos fizeram %d pontos.\n", pontosA);
    }

    return 0;
}
