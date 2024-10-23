#include<stdio.h>
#include<stdlib.h>
int main(){
 
 float *arr=(float *)malloc(5*sizeof(float));
 arr[0]=1.1;
  arr[1]=2.1;
   arr[2]=3.1;
    arr[3]=4.1;
     arr[4]=5.1;
  
for(int i=0;i<5;i++)
 printf("The values are %f \n",arr[i]);

free (arr);
return 0;

}

  
