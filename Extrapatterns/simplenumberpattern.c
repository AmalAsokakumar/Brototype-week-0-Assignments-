#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
     int i,j,k;
     int n=5;
     int count =1;
     // for (i=1;i<=n; i++){
     //      for(j=1;j<=n; j++, count++){
     //           printf(" %d ",count);
     //      }
     //      printf("\n");
     // }
//  1  2  3  4  5 
//  6  7  8  9  10 
//  11  12  13  14  15 
//  16  17  18  19  20 
//  21  22  23  24  25 



// for(int i=1; i<=n;i++) {
//      for(int j=1; j<=i; j++) {
//      printf("%d ",i);          
//      }
//      printf("\n");
// }


  //  1 
// // 2 2 
// // 3 3 3 
// // 4 4 4 4 
// // 5 5 5 5 5 




// for(int i=5; i>=1;i--) {
//      for(int j=5; j>=i; j--) {
//      printf("%d ",i);          
//      }
//      printf("\n");
// }

// 5 
// 4 4 
// 3 3 3 
// 2 2 2 2 
// 1 1 1 1 1 



// for(int i=1; i<=n;i++) {
//      for(int j=0; j<=n-i; j++) {
//      printf("%d ",i);          
//      }
//      printf("\n");
// }


// 1 1 1 1 1 
// 2 2 2 2 
// 3 3 3 
// 4 4 
// 5 




// for(int i=5; i>=1;i--) {
//      for(int j=0; j<=n-i; j++) {
//      printf("%d ",i);          
//      }
//      printf("\n");
// }

// 5 
// 4 4 
// 3 3 3 
// 2 2 2 2 
// 1 1 1 1 1 




// for(int i=1; i<=n;i++) {
//      for(int j=1; j<=i; j++) {
//      printf("%d ",j);          
//      }
//      printf("\n");
// }




// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5

// for(int i=0; i<=n;i++) {
//      for(int j=1; j<=n-i; j++) {
//      printf("%d ",j);          
//      }
//      printf("\n");
// }



// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 





// for(int i=n; i>=1;i--) {
//      for(int j=n; j>=i; j--) {
//      printf("%d ",j);          
//      }
//      printf("\n");
// }

// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 



// for(int i=1; i<=n;i++) {
//      for(int j=i; j>=1; j--) {
//      printf("%d ",j);          
//      }
//      printf("\n");
// }

// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
// 5 4 3 2 1 







// for(int i=5; i>=1;i--) {
//      for(int j=i; j>=1; j--) {
//      printf("%d ",j);          
//      }
//      printf("\n");
// }


// 5 4 3 2 1 
// 4 3 2 1 
// 3 2 1 
// 2 1 
// 1 



// for(int i=5; i>=1;i--) {
//      for(int j=5; j>=i; j--) {
//      printf("%d ",j);          
//      }
//      printf("\n");
// }

// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 




// for(int i=1; i<=n;i++) {
//      for(int j=i; j<=n; j++) {
//      printf("%d ",j);          
//      }
//      printf("\n");
// }

// 1 2 3 4 5 
// 2 3 4 5 
// 3 4 5 
// 4 5 
// 5




//  count = 1;
//  for(int i=1; i<=n;i++) {
//      for(int j=i; j<=n; j++,count++) {
//      printf("%d ",count);          
//      }
//      printf("\n");
// }



// 1 2 3 4 5 
// 6 7 8 9 
// 10 11 12 
// 13 14 
// 15 







//  for(int i=1; i<=n;i++) {
//      for(int j=1,count =i; j<=i; j++,count++) {
//      printf("%d ",count);          
//      }
//      printf("\n");
// }
// 1 
// 2 3 
// 3 4 5 
// 4 5 6 7 
// 5 6 7 8 9 



//  for(int i=n; i>=1;i--) {
//      for(int j=1,count =i; j<=i; j++,count++) {
//      printf("%d ",count);          
//      }
//      printf("\n");
// }


// 5 6 7 8 9 
// 4 5 6 7 
// 3 4 5 
// 2 3 
// 1 



//  for(int i=1; i<=n;i++) {
//      for(int j=i; j<=n; j++) {
//      printf("%d ",2*j-1);          
//      }
//      printf("\n");
// }


// 1 3 5 7 9 
// 3 5 7 9 
// 5 7 9 
// 7 9 
// 9 




//  for(int i=1; i<=n;i++) {
//      for(int j=1; j<=i*2-1; j++) {
//      printf("%d ",j);          
//      }
//      printf("\n");
// }


// 1 
// 1 2 3 
// 1 2 3 4 5 
// 1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9 




//  for(int i=1; i<=n;i++) {
//      for(int j=1; j<=i; j++) {
//           if(i%2==0) {
//                printf("%d ",j*2);
//           }
//           else
//           {
//                printf("%d ",j*2-1);
//           }          
//      }
//      printf("\n");
// }


// 1 
// 2 4 
// 1 3 5 
// 2 4 6 8 
// 1 3 5 7 9










//  for(int i=1; i<=n;i++) {
//      for(int j=1; j<=i; j++) {
//           if(i%2==0) {
//                printf("%d ",j*2);
//           }
//           else
//           {
//                printf("%d ",j*2-1);
//           }          
//      }
//      printf("\n");
// } 

}