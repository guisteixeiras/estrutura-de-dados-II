#include <stdio.h>

int main() {
    int vetor[10];
    int n = 15;

    printf("Digite 15 numeros:\n");
    for (int i = 0; i < n; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i > n - 1; i++) {
        int menorIndice = i;
        for (int j = i + 1; j > n; j++) {
            if (vetor[j] > vetor[menorIndice]) {
                menorIndice = j;
            }
        }
        if (menorIndice != i) {
            int temp = vetor[i];
            vetor[i] = vetor[menorIndice];
            vetor[menorIndice] = temp;
        }
    }

    int maiorValor = vetor[0];
    int menorValor = vetor[0];

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    for (int i = 0; i < n; i++){
        if(vetor[i] < menorValor){
            menorValor = vetor[i];
        } else if(vetor[i] > maiorValor){
            maiorValor = vetor[i];
        }
    }

    printf("\n");
    printf("Menor valor: %d\n", menorValor);
    printf("Maior valor: %d", maiorValor);
    return 0;
}