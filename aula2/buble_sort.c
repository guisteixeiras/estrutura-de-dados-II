#include <stdio.h>

void bubbleSort(int vetor[], int tamanho) {
    int i, j, tam, aux;

    for (i = 0; i < tamanho - 1; i++) {

        printf("\n========== PASSAGEM i = %d ==========\n", i);

        for (j = 0; j < tamanho - 1 - i; j++) {

            printf("i = %d | j = %d | Comparando vetor[%d] = %d com vetor[%d] = %d",
                   i, j, j, vetor[j], j + 1, vetor[j + 1]);

            if (vetor[j] > vetor[j + 1]) {

                printf(" -> TROCOU!\n");

                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;

            } else {

                printf(" -> NAO TROCOU\n");
            }

            // Mostra o vetor após a comparação
            printf("    Vetor: ");
            for (int k = 0; k < tamanho; k++) {
                printf("%d ", vetor[k]);
            }
            printf("\n");
        }
    }
}

int main() {
    
    int tamanho;

    printf("Tamanho do vetor: ");
    scanf(" %d", &tamanho);

    int numeros[tamanho];

    for (int i = 0; i < tamanho; i++){
        printf("Valor do vetor na posição [%d]: ", i);
        scanf(" %d", &numeros[i]);
    }

    printf("Vetor inicial: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    bubbleSort(numeros, tamanho);

    printf("\n====================================\n");
    printf("Lista ordenada: ");

    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}