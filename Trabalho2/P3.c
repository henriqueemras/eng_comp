#include <stdio.h>
#include <string.h>
#include <locale.h>
 

int main()
{
    setlocale(LC_ALL, "");
    char palavra[20];
    int vogalV;

    printf("Insira uma palavra de até 20 caracteres: ");
    scanf("%s",palavra);

    

        if(verificaConjuntos(&palavra) > 0){
            printf("%s não é legal",palavra);
        }
        else if( verificaVogal(&palavra) < 3){
            printf("%s não é legal",palavra);
        }
        else if(verificaDuplicata(&palavra) < 1){
            printf("%s não é legal",palavra);
        }
        else{
            printf("%s é legal",palavra);
        }

    return 0;
}

int verificaVogal(char aux[]){
    int counter = 0;
    char VOGAL[10] = {'A', 'a', 'E', 'e', 'I', 'i', 'O', 'o', 'U', 'u'};

    for(int i = 0; i < sizeof(aux); i++){
        for(int j = 0; j < 10; j++){
            if(aux[i] == VOGAL[j]) {
                counter++;
            }
        }
    }
    return counter;
}

int verificaDuplicata(char aux[]){
    int verifica = 0;
        for(int i = 0; i < sizeof(aux); i++){
        for(int j = 1; j < 10; j++){
            if(aux[i] == aux[j]) {
                verifica++;
            }
        }
    }
    return verifica;
}

int verificaConjuntos(char aux[]){
    int counter = 0;
    //Verificar cd, pq, xy, uv, vu
    for(int i = 0; i < sizeof(aux); i++)
    {
        if(aux[i] == 'c'){
            if(aux[i+1]=='d'){
                counter++;
            }
        }

        if(aux[i] == 'p'){
            if(aux[i+1]=='q'){
                counter++;
            }
        }
        if(aux[i] == 'x'){
            if(aux[i+1]=='y'){
                counter++;
            }
        }
        if(aux[i] == 'u'){
            if(aux[i+1]=='v'){
                counter++;
            }
        }
        if(aux[i] == 'v'){
            if(aux[i+1]=='u'){
                counter++;
            }
        }
    }
    return counter;
}

