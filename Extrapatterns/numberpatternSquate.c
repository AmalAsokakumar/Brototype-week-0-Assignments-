#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (){

int n ;
printf("ENTER THE ROW NUMBER");
scanf("%d",&n);
// for (int i = n; i >=1; i--){
//      for(int j=n; j >= 1; j--){
//           if((j<=i))
//           {
//                 printf ("%d",i);
//           }
          
          
//           else 
//           { 
//                printf("%d",j);
//           }
//      }
//      printf("\n");
// }





// 55555
// 54444
// 54333
// 54322
// 54321









// for (int i = 1, l=n; i<=n; i++,l--){
//      int k =i;
//      for(int j=1,k =n; j<=n ; j++,k--){
//           if(j<=i)
//           {
//                 printf ("%d",k);
//           }
          
          
//           else 
//           { 
               
//                printf("%d",l);
//           }
//      }
//      printf("\n");
// }


// 55555
// 54444
// 54333
// 54322
// 54321












// for (int i = 1, l=n; i<=n; i++,l--){
//      for(int j=1,k =l; j<=n ; j++){
//           if(j<=(n-i)+1)
//           {
//                 printf ("%d",l);
//           }
          
          
//           else 
//           { 
//                k++;
//                printf("%d",k);
//           }
//      }
//      printf("\n");
// }





// 55555
// 44445
// 33345
// 22345
// 12345

















for (int i = 1, l=n; i<=n; i++,l--){
     for(int j=1,k =l; j<=n ; j++){
          if(j<=(n-i)+1)
          {
                printf ("%d",l);
          }
          
          
          else 
          { 
               k++;
               printf("%d",k);
          }
     }
     printf("\n");
}

















}

