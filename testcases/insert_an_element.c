#include <stdio.h>
#include <stdlib.h>

int main(){  int a[10] = {2,4,5,7,11,14,15};
    int n =9;
    int i=0;
    int temp =0;
    int count =8;


    // in this program we have sorted data and we need to insert an element in this array
    // hence we compare array element with the entered elements to find its suitable position.
    // then we move all elements to a position forward.


    while (1){ // checking for an element which is greater than reference element.
        if (a[i] > n){
            break;
            }
    i++;
    }
     for (int j =i ; j<count; j++){     // once we obtained the index position we can insert 
          temp = a[j];                 // the intended element and  and move all the elements from this 
          a[j]=n;                      //to one position forward 
          n=temp;
     }

     for (int i=0 ; i<count; i++){
          printf("%d ",a[i]);
     }
}
