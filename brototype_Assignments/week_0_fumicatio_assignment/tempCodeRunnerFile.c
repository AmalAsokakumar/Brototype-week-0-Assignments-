#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 5;
    
    for(int i=1;i<=count;i++){
        for(int j= 1;j<=count;j++){
            if((j==1)||(j==5)||(i==1)||(i==count)){
                printf("*");
            }else
            { printf(" ");}
        }
        printf("\n");
    }
}
