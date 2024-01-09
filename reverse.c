#include<stdio.h>
void printrev(int *arr,int n);
int main(){
    int arr1[9];
    printf("Enter 9 inputs for array\n");
    for(int i=0;i<9;i++){
        scanf("\n%d",&arr1[i]);
    }
       printrev(arr1,9);
     for(int i=0;i<9;i++){
         printf("%d\t",arr1[i]);
    }
    
    return 0;
}
void printrev(int *arr,int n){
    printf("\n\n\n Reversed Array \n");
int temp;
    for(int i=0;i<(n/2);i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
        printf("\n\n");
    
 
 
}