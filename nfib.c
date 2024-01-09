#include<stdio.h>
int main(){
    int n;
    printf("Enter number of digits(Greater than 2) of Fibonacchi series you want to print:");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("The fibonacchi series %d digits is\n",n);
    for(int i=0;i<n;i++){
        printf("%d\t",fib[i]);
    }

    return 0;
    }