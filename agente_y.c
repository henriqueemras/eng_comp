#include <stdio.h>

int vet[100] = {};
void rotatepos(int vetor[], int a, int b, int c);
void rotateval(int vetor[], int a, int b, int c);
void flip(int vetor[], int a, int b);
void roll(int vetor[], int p1, int p2);

int main(void){

    for(int i = 0; i < 99; i++){
        vet[i]= i;
    }
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

void rotateval(int vetor[], int a, int b, int c){
    int aux1, aux2, aux3, pos1, pos2, pos3;

    for(int i = 0; i < 99; i++){
        if(vetor[i] == a) pos1 = i;
        else if(vetor[i] == b) pos2 = i;
        else if(vetor[i] == c) pos3 = i;
        else continue;
    }
    aux1 = vetor[a];
    aux2 = vetor[b];
    aux3 = vetor[c];
    
    vetor[c] = aux1;
    vetor[b] = aux3;
    vetor[a] = aux2;

}

void flip(int vetor[], int a, int b){
    int posrel = (b-a) + 1;
    int vetaux[posrel];
    
    for(int i = 0; i < posrel; i++){
        vetaux[i] = vetor[a+i];
    }

    for(int i = 0; i < posrel; i++){
        vetor[b-i] = vetaux[i];
    }

}

void roll(int vetor[], int p1, int p2){
    int aux = vetor[p1];
    for(int i = p1; i <= p2; i++){
        if(i == p2){
            vetor[i] = aux;
        } else{
                vetor[i] = vetor[i+1];
        } 
    }
}