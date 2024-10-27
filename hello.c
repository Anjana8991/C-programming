#include<stdio.h>
#include<stdlib.h>
int main(){
int *p;
int *q;
    int i;

 p=(int*)malloc(5*sizeof(int));
 
 q=(int*)malloc(10*sizeof(int));
 p[0]=3;
 p[1]=5;
 p[2]=7;
 p[3]=9;
 p[4]=11;
for(i=0;i<5;i++){
    q[i]=p[i];
   free(p);  
}

printf("\n");
p=q;
q=NULL;
for(i=0;i<5;i++){
        printf("%d ",q[i]);
}

return 0;
}




