#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){

     int count = 0;
     int flag = 0;
     int i;
     int starting_index = 0;
     printf("Enter the number of rows you wanted to print : ");
     scanf("%d",&count);
     printf("Enter the starting Element : ");
     scanf("%d", &starting_index);
          for( i=0;i<count;i++){
               for(int j=0; j<=i; j++) {
                    if((j<=i) && (i <= (count/2)){
                         printf("*");
                    if (i> count /2){
                         if (j<count-i){
                    }
                    printf("*");
                    }
                    }
                   
               printf("\n");          
          
     
          
}
}
}
