#include <stdio.h>

int main() {
    int *a,largest;
    int A[10];
     printf("Enter the elemnts\n");
     for(int i=0;i<10;i++){
     scanf("%d",&A[i]);
     }
    a=A;
    largest=*a;
   
    for(int i=0;i<10;i++){
        if(*a>largest){
            largest =*a;
        }
        a++;
    }
    printf(" the largest element is%d \n",largest);


   }




