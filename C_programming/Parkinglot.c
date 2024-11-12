#include<stdio.h>
#include<conio.h>
int  Menu();
void Bus();
void Cycle();
void Riksha();
void Delete();
void showdetail();

int nor=0,nob=0,noc=0,amount =0,count=0;
void main(){
clrscr();
switch(Menu()){
    case1:
        Bus();
        break;
    case2:
        Cycle();
        break;
    case3:
        Riksha();
        break;
    case4:
        showdetail();
        break;
    case5:
    Delete();
    break;
    default:
    printf("\n Invalid choice");

}
getch();

}
int Menu()  {
    int ch;
    printf("\n  enter bus");
    printf("\n  enter cycle");
    printf("\n  enter Riksha");
     printf("\n  show status");
     printf("\n  delete data");
    printf("\n Enter your choice\n");
    scanf("%d",&ch);
    return(ch);
    }
void Delete(){
    nob=0;
    noc=0;
    nor=0;
    amount=0;
    count=0;
}
void showdetail(){
    printf("\n number of bus =%d,nob");
    printf("\n number of cycle =%d,noc");
    printf("\n number of ricksha =%d,nor");
    printf("\n total number of vehicle =%d,count");
    printf("\n toltal gain amount =%d,amount");
}
void Ricksha(){
nor++;
amount=amount+50;
count++;
}
void Cycle(){
noc++;
amount=amount+20;
count++;
}
void Bus(){
nob++;
amount=amount+100;
count++;
}