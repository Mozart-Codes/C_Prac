#include<stdio.h>
#include<stdlib.h>
int main(){
    int a=0,b=1;
    a=a^b;
    b=b^a;
    printf("%d %d",a,b);
    return 0;
    }