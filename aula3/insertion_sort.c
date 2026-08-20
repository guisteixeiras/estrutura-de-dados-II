#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

void insertionSort(Aluno alunos[], int tamanho) {
    int i, j;
    Aluno chave;

    for (i = 1; i < tamanho; i++) {
        printf("\n========== PASSAGEM i = %d ==========\n", i);
        chave = alunos[i];
        j = i - 1;
        printf("Elemento a inserir: %s (%.2f)\n", chave.nome, chave.nota);

        while (j >= 0 && alunos[j].nota > chave.nota) {
            printf("j = %d | Comparando alunos[%d] = %.2f com chave = %.2f -> DESLOCOU!\n",
                   j, j, alunos[j].nota, chave.nota);
            alunos[j + 1] = alunos[j];
            j--;
            printf("    Vetor: ");
            for (int k = 0; k < tamanho; k++) {
                printf("%.2f ", alunos[k].nota);
            }
            printf("\n");
        }
        if (j >= 0) {
            printf("j = %d | Comparando alunos[%d] = %.2f com chave = %.2f -> NAO DESLOCOU\n",
                   j, j, alunos[j].nota, chave.nota);
        }

        alunos[j + 1] = chave;

        printf("Vetor apos passagem i = %d: ", i);
        for (int k = 0; k < tamanho; k++) {
            printf("%.2f ", alunos[k].nota);
        }
        printf("\n");
    }
}

void exibirTabela(Aluno alunos[], int tamanho) {
    printf("\n===================================\n");
    printf("%-30s %s\n", "Nome", "Nota");
    printf("===================================\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%-30s %.2f\n", alunos[i].nome, alunos[i].nota);
    }
    printf("===================================\n");
}

int main() {

    int tamanho;

    printf("Quantidade de alunos: ");
    scanf(" %d", &tamanho);

    Aluno alunos[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);

        printf("Nome: ");
        getchar(); 
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Nota: ");
        scanf(" %f", &alunos[i].nota);
    }

    printf("\nLista inicial:\n");
    exibirTabela(alunos, tamanho);

    insertionSort(alunos, tamanho);

    printf("\n====================================\n");
    printf("Lista ordenada:\n");
    exibirTabela(alunos, tamanho);

    return 0;
}