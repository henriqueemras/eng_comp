#include <stdio.h>
#include <locale.h>

#define TAM_MAX 10

int main()
{
    setlocale(LC_ALL, "");

    int vec[TAM_MAX];
    int i = 0;
    int result;

    printf("Insira 10 algarísmos pressionando enter entre cada um: ");

    while (i < TAM_MAX)
    {
        scanf("%d", &vec[i]);
        i++;
    }

    if (vec[0] < vec[1])
    { //Crescente
        for (int j = 0; j < TAM_MAX; j++)
        {
            if (vec[j] < vec[j + 1])
            {
                result++;
                if (result == 9)
                {
                    printf("O vetor está em ordem crescente");
                    break;
                }
            }
            else
            {
                printf("O vetor não está em ordem");
                break;
            }
        }
    }
    else if (vec[0] > vec[1])
    { //Decrescente
        for (int j = 0; j < TAM_MAX; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                result++;
                if (result == 9)
                {
                    printf("O vetor está em ordem decrescente");
                    break;
                }
            }
            else
            {
                printf("O vetor não está em ordem");
                break;
            }
        }
    }
    else
    { //Nada
        printf("O vetor não está em ordem");
    }

    return 0;
}