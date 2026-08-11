#include <stdio.h>
#include <stdlib.h>

//Após ordenar o vetor, implemente em C um algoritimo de
//pesquisa binaria com base na atividade desenvolvida manualmente. 
//utilize sua criativdade para implementar o código

int vetor[7] = {7, 15, 29, 34, 45, 82, 90};

int num = 45;

int buscaBinaria(int *vetor, int num, int fim){
    int inicio = 0;
    int meio = (inicio + fim) / 2;

    while(inicio <= fim){
        if(num == vetor[meio])
            return meio;
        else {
            if(num < vetor[meio])
                fim = meio - 1;
            else
                inicio = meio + 1;
        }
    }
    return -1;
}
