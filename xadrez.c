

#include <stdio.h>

int main() {
    // Torre - movendo 5 casas para a direita (utilizando for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Bispo - movendo 5 casas na diagonal para cima e para a direita (utilizando while)
    printf("\nMovimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Rainha - movendo 8 casas para a esquerda (utilizando do-while)
    printf("\nMovimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;
}
