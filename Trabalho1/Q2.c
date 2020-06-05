#include <stdio.h>

int main(void){
    int number_1, number_2;
    float aux_1, aux_2;

    printf("Insira um numero qualquer: ");
    scanf("%d",&number_1);
    printf("Insira outro numero: ");
    scanf("%d",&number_2);

    aux_1 = number_1 % number_2;
    aux_2 = number_2 % number_1;

    if(aux_1 == 0 && aux_2 != 0) {
        printf("%d e multiplo de %d.", number_1, number_2);
    } else if(aux_1 != 0 && aux_2 == 0) {
        printf("%d e multiplo de %d.", number_2, number_1);
    } else if(aux_1 == 0 && aux_2 == 0) {
        printf("%d e multiplo de %d e vice-versa.", number_1, number_2);
    } else {
        printf("Os numeros inseridos nao sao multiplos");
    }

    return 0;
}