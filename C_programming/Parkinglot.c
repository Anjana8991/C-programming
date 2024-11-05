#include<stdio.h>
#include<conio.h>
int nor=0,nob=0,noc=0,amount =0,count=0;
void main(){

}
void Menu()  {
    printf("\n  enter bus");
    printf("\n  enter cycle");
    printf("\n  enter Riksha");
     printf("\n  show status");
     printf("\n  delete data");

    }
void Delte(){
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