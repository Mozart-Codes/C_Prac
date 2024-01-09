#include<stdio.h>
int main(){
    int a=5;
    int *ptr=&a;
    printf("\n%u",&a);
    printf("\n%u",*ptr);
    printf("\n%u",ptr);
    ptr++;
    printf("\n%u",*ptr);
    ptr--;
    printf("\n%u",ptr);
    int b=7;
    int *ptr2=&b;
   
    printf("\n\n%u",*ptr2-*ptr);
    return 0;

}