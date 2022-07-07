#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
     int i,j;
     char a[20]="ABCDEFGFEDCBA";
     int  n = strlen(a);
     int m=(n/2);
     printf("%d\n",n);
     printf ("%s\n",a);
     for (int i=0; i<=n; i++){
          for(int j=0; j<=n;j++){

               if (( j>= ((m-i))) && (j <= ((m+i)))){
                    printf(" ");
               }else printf("%c",a[j]);
          }
          printf("\n");
     }
}