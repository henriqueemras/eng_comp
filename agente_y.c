#include <stdio.h>

int vet[100] = {0000};

int main(void){
    for(int i = 0; i < 99; i++){
        vet[i]= i;
    }

    rotatepos(vet, 0, 1, 2);
    printf("%d, %d, %d,", vet[0],vet[1],vet[2])
    return 0;
}
void rotatepos(int vetor[], int a, int b, int c){
    int aux1, aux2, aux3;
    aux1 = vetor[a];
    aux2 = vetor[b];
    aux3 = vetor[c];
    
    vetor[c] = aux1;
    vetor[b] = aux3;
    vetor[a] = aux2;

}