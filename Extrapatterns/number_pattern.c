#include <stdio.h>
#include <stdlib.h>

int main (){

     int n;
     int i;
     int j;
     int m;
     int k=1;

     printf("Enter a the size of the rows : ");
     scanf("%d",&m);
     n= 2*m;

//pattern 1

// 111111
// 111111
// 111111
// 111111
// 111111
// 111111

     for (int i = 0; i <=m; i++){
          for(int j = 0; j <=m; j++){

               printf("%d",k);
          }
          printf("\n");
          
     }









//pattern 2


// 000000
// 111111
// 000000
// 111111
// 000000
// 111111


     for (int i = 0; i <=m; i++){
          for(int j = 0; j <=m; j++){
               if(i%2==0){
                    printf("0");
               }
               else printf("1");
          }
          printf("\n");
          
     }




//pattern 3
 

// 010101
// 010101
// 010101
// 010101
// 010101
// 010101








     for (int i = 0; i <=m; i++){
          for(int j = 0; j <=m; j++){
               if(j%2==0){
                    printf("0");
               }
               else printf("1");
          }
          printf("\n");
          
     }








//pattern 4

// ******
// *0000*
// *0000*
// *0000*
// *0000*
// ******

     for (int i = 0; i <=m; i++){
          for(int j = 0; j <=m; j++){
               if((j==0)||(j==m)||(i==0)||(i==m)){
                    printf("*");
               }
               else printf("0");
          }
          printf("\n");
          
     }




// pattern 5

// 0*0*0
// *0*0*
// 0*0*0
// *0*0*
// 0*0*0



     for (int i=0,k=1; i <m; i++){ // expected numbers are in odd number.
          for( j = 0; j <m; j++){
                if (k%2==0) 
                    { printf("*");
               }
               else 
                    { printf("0"); 
                    }
               k++;
               }
               printf("\n");
          
     }







// pattern 6;


// 0000*0000
// 0000*0000
// 0000*0000
// 0000*0000
// *********
// 0000*0000
// 0000*0000
// 0000*0000
// 0000*0000




//     for (int i=1; i <n; i++){ 
//          for(int j = 1; j <n; j++){
//                if ((j==m)||(i==m))
//                    { printf("*");
//               }
//               else
//                    { printf("0");
//                    }
//               }
//               printf("\n");
         
//     }


//pattern 7



// 111101111
// 111101111
// 111101111
// 111101111
// 000000000
// 111101111
// 111101111
// 111101111
// 111101111




//     for (int i=1; i <n; i++){ 
//          for(int j = 1; j <n; j++){
//                if ((i==m)||(j==m))
//                    { printf("0");
//               }
//               else
//                    { printf("1");
//                    }
//               }
//               printf("\n");
         
//     }











// pattern 8

// 000010000
// 000101000
// 001000100
// 010000010
// 100000001



//     for (int i=1; i <=m; i++){ 
//          for(int j = 1; j <n; j++){
//                if ((j==m-i+1)||(j==m+i-1))
//                    { printf("1");
//               }
//               else
//                    { printf("0");
//                    }
//               }
//               printf("\n");
         
//     }







//pattern 9

// 100000001
// 010000010
// 001000100
// 000101000
// 000010000





//     for (int i=1; i <=m; i++){ 
//          for(int j = 1; j <n; j++){
//                if ((j==i)||(j==n-i))
//                    { printf("1");
//               }
//               else
//                    { printf("0");
//                    }
//               }
//               printf("\n");
         
//     }






// 01110
// 10001
// 10001
// 10001
// 01110









//     for (int i=1; i <=m; i++){ 
//          for(int j = 1; j <=m; j++){


//           if (((i==1)||(i==m)) &&((j==1)||(j==m)))
//           {
//                 printf("0");
//           }

//           else if ((i==1) || (j==1)||(i==m)|| (j==m)){
//                          printf("1");
//                     }
//                     else
//                          { 
//                               printf("0");
//                          }
//               }
//               printf("\n");
         
//     }









    for (int i=1; i <=m; i++){ 
         for(int j = 1; j <=m; j++){


          if (((i==1)||(i==m)) &&((j==1)||(j==m)))
          {
                printf("0");
          }

          else if ((i==1) || (j==1)||(i==m)|| (j==m)){
                         printf("1");
                    }
                    else
                         { 
                              printf("0");
                         }
              }
              printf("\n");
         
    }









// 6 6 6 6 6 6 6 6 6 6 6 
// 6 5 5 5 5 5 5 5 5 5 6 
// 6 5 4 4 4 4 4 4 4 5 6 
// 6 5 4 3 3 3 3 3 4 5 6 
// 6 5 4 3 2 2 2 3 4 5 6 
// 6 5 4 3 2 1 2 3 4 5 6 
// 6 5 4 3 2 2 2 3 4 5 6 
// 6 5 4 3 3 3 3 3 4 5 6 
// 6 5 4 4 4 4 4 4 4 5 6 
// 6 5 5 5 5 5 5 5 5 5 6 
// 6 6 6 6 6 6 6 6 6 6 6





     n/=2;
    // int i, j, 
     //int n = 5;
     int r;
     int c;
     //printf("Enter a number: ");
     //scanf("%d", &n);
     for (i = 1, c =n; i < 2*n; i++, c--) // c  count to to create outer layer
     {
         if(i <=n)
         {
          r = n;
          }
          else 
          { 
               r= n;
               int  r_p =i-n;
          }

          int  r_p =c; // for printing the third section.
          
          for(j = 1; j < 2*n; j++)
          {
               if (i<=n){
                    if(j<=i)
                    {
                         printf("%d ",r);//first half i==n
                         r--;          //
                    }
                    else if((j<=2*n-i)&&(j>=i))
                    {
                              printf("%d ",c);// second half j<=2n-i     
                    }
                    else
                    {
                              r_p++;
                              printf("%d ",r_p); // third half
                    }

               }
               else // second part of the square.
               {
                   //printf("*");
                    if(j<(n-((i-n)))){
                         printf("%d ",r); //
                         r--;
                    }
                    else if(j<=i){
                         if(j<=n){
                              printf("%d ",r); //
                         }
                         else
                         {
                              printf("%d ",r); //
                         }
                         {}
                    }
                    else
                    {    
                         r++;
                         printf("%d ",r);
                    }
               }

          }
          printf("\n");
     }





}