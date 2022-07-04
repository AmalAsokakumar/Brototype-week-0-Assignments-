#include <stdio.h>
#include <stdlib.h>



int main(){
int limit,position,changing,a[20],i,temp=0;

	printf("Array limit=");
    scanf("%d",&limit);

    printf("Enter values=");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
        printf("Enter the position you want to change=");
        scanf("%d",&position);

        printf("value for changing");
        scanf("%d",&changing);

      for(i=position-1;i<limit+1;i++){

    	  temp=a[i];
    	  a[i]=changing;
    	  changing=temp;

      }
      for(i=0;i<limit+1;i++){
    	  printf("%d",a[i]);
      }

}
