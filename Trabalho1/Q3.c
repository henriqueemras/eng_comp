#include <stdio.h>

int main(void){
    int year = 0;
    int m,c,d,u;
    int century = 0;
    int state = 0;

    printf("Insira um ano qualquer ");
    scanf("%d",&year);
    while(state != 3){

        switch (state) {
            case 0:
                m = year/1000;
                c = (year - (m*1000))/100;
                d = (year - ((m*1000) + (c*100)))/ 10;
                u = year - ((m*1000) + (c*100) + (d*10));

                if(m != 0){
                    state = 1;
                } else {
                    state = 2;
                }
            break;
            
            case 1:
                century+=(m*10);
                state = 2;
            break;
            
            case 2:
                if(c != 0 && u == 1 ) {
                    century+=(c + 1);
                } else if(c == 0 && u == 1){
                    century+= 1;
                } else if(c == 0) {
                    century += 1;
                } else {
                    century += c;
                }
                state = 3;
            break;
    
            default:
            break;
        }
    }
    printf("o seculo e %d",century);
    return 0;
}