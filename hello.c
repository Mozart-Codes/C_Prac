#include<stdio.h>
int swap(int x,int y);
int _swap(int *p,int *q);
int main(){
int a=5;
int b=3;
swap(a,b);
printf("\nTwo no are %d and %d after call by value\n\n",a,b);
    return 0;
    _swap(&a,&b);
    printf("\nTwo no are %d and %d after call by reference\n\n",a,b);
return 0;
}
int swap(int x,int y){
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("\nTwo no are now swapped as %d and %d using call by value",x,y);
    return 0;
}
int _swap(int *p, int *q){
    int *t;
    *t=*p;
    *p=*q;
    *q=*t;

    return 0;
}