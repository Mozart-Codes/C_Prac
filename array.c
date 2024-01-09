#include<stdio.h>
int main(){
    int aadhar[5];
    printf("Enter aadhar of 5 people : ");
    // For input using pointer
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i++){
        printf("\n%d Index:",i);
        scanf("%d",(ptr+i));
    }
    // For output using pointer
    for(int i=0;i<5;i++){
        printf("\n%d Index:%d",i,*(ptr+i));
    }

    return 0;}