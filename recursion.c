#include<stdio.h>
float sum(float n);
int main(){
    float n,sumn;
    printf("Enter the natural numbr you want sum till: ");
    scanf("%f",&n);
    sumn=sum(n);
    printf("Sum of natural numbers till %f is : %f ",n,sumn);
    return 0;
}
float sum(float n){
    if(n==1){
        return 1;
    } else{
        n=n+sum(n-1);
        return n;

    }
}