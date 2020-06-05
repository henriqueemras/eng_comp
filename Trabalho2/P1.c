#include<stdio.h>
#include <locale.h>
 
int main() {
 setlocale(LC_ALL, "");
 int insert, counter, result = 0;
 
 
 printf("Digite um número: ");
 scanf("%d", &insert);

 int dividers[insert/2];
 if(insert == 1 || insert == 0)
 {
     printf("%d não é um número primo. \n", insert);
     return 0;
 }
 
 for (counter = 2; counter <= insert / 2; counter++) {
    if (insert % counter == 0) {
       dividers[result] = counter;
       result++;
    }
 }
 
 if (result == 0)
    printf("%d é um número primo\n", insert);
 else
    printf("%d não é um número primo e divisivel por ", insert);
    int i = 0;
    while(i <= (result-1))
    {
        printf("%d, ",dividers[i]);
        i++;
    }
 
 return 0;
}