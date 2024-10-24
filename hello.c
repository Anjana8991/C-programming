#include <stdio.h>

int main() {
    int temp;
    int A[10];
    printf("Enter the array elements\n");
   for(int i=0;i<10;i++){
     scanf("%d",&A[i]);
   }
   
    int *a;
    int *b;
    a=A;
    b=&A[9];//A+9
while (a<b)
{
  temp=*a;
  *a=*b;
  *b=temp;
  a++;
  b--;
    /* code */
}
for(int i=0;i<10;i++){
printf("Reversed array%d\n",A[i]);
}
return 0;
}
