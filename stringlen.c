#include<stdio.h>
int main(){
    char firstname[100];
    int i;
    printf("Enter name to count length of it: ");
    fgets(firstname,100,stdin);
    for(i=0;firstname[i]!='\0';i++){


    }
    printf("Total Count is :%d",i-1);


    return 0;
    }