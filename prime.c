#include<stdio.h>
int main(){
    int a,t=0;
    printf("Enter the number to check if its a prime number: ");
    scanf("%d",&a);
    for(int i=2;i<(a/2);i++){
        if(a%i==0){
            printf("\nNot prime");
            t=2;
            break;
        }else{
            t=1;
        }
    }
    if(t==1){
        printf("The number %d is Prime",a);
    }
    return 0;
}