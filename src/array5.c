#include <stdio.h>

int main(){
    int n[] = {13,8,23,95,47,14,10,45,165};
    int rs;
    for(rs = 0 ; rs <= 8 ; rs++){

        if(n[rs] % 2 == 0){
            printf("%d\n",n[rs]);
        }
        

    }
    return 0;
}