#include <stdio.h>

int main(void){
    float altura = 0;

    printf("Bem vindo a seletiva de\n");
    printf("    personagens de \n");
    printf("     GAME OF BONES\n");
    printf("\nInsira a sua altura em metros: ");
    scanf("%f",&altura);

    if(altura < 1.5){
        printf("Voce esta na turma dos baixinhos!");
    } else if(altura >= 1.5 && altura <= 1.9) {
        printf("Voce esta na turma dos medios!");
    } else {
        printf("Voce esta na turma dos grandoes!");
    }

    return 0;
}