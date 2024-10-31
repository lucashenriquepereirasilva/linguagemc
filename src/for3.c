#include <stdio.h>
int main(){
    int num;
    int total = 0;
    for(num=1930; num <= 2024 ; num++){
        if(num % 4 == 0){
            printf("os anos bissextos são: %d\n ",num);
            total ++;
        }
    }
    printf("A quantiade de anos bissexto é %d\n",total);
    return 0;
}