#include <stdio.h>
#include <string.h>
#include <locale.h>
 

int main()
{
    setlocale(LC_ALL, "");
    char palavra[20];
    char msg[3] = {0,0,0};

    printf("Insira uma palavra de até 20 caracteres: ");
    scanf("%s",palavra);

        if(verificaConjuntos(&palavra) > 0){
            msg[0] = 1;
        }
        if( verificaVogal(&palavra) < 3){
            msg[1] = 1;
        }
        if(verificaDuplicata(&palavra) < 1){
            msg[2] = 1;
        }
        if(msgNaolegal(&msg,&palavra) > 0){
            return 0;
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
            if(aux[i] == aux[i+1]) {
                verifica++;
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

int msgNaolegal(char aux[],char aux1[]){
    int count = 0;
    if(aux[0] == 1){
        printf("\n%s não é legal (possui um dos conjuntos de letra proibidos repetido)",aux1);
        count++;
    }
    if(aux[1] == 1){
         if(aux[0] == 1){
            printf("\n, (possui menos de três vogais)");
            }
        else{
            printf("\n%s não é legal (possui menos de três vogais)",aux1);
        }
        count++;
    }
    if(aux[2] == 1){
        if(aux[0] == 1 || aux[1] == 1){
            printf("\n, (não possui letras duplicadas)");  
        }
        else{
            printf("\n%s não é legal (não possui letras duplicadas)",aux1);
        }  
        count++;     
    }
    return count;
}

