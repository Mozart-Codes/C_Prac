#include<stdio.h>
void printNum(int *arr,int n);
void printrev(int *arr,int n);
int main(){
    int arr1[10];
    printf("Enter 10 inputs for array\n");
    for(int i=0;i<10;i++){
        scanf("\n%d",&arr1[i]);
    }
   // printNum(arr1,10);
    printrev(arr1,10);
     for(int i=0;i<10;i++){
         printf("%d\t",arr1[i]);
    }
    
    return 0;
}
void printNum(int *arr,int n){
    printf("\n Now printing Array \n");
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
        printf("%d\t",arr[i]);}
    }
 
}
void printrev(int *arr,int n){
    printf("\n\n\n Reversed Array \n");
int temp[n];
    for(int i=0,j=(n-1);i<n,j>0;i++,j--){
        temp[j]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=temp[i];
        printf("%d\t",arr[i]);
    }
    printf("\n\n");
    
 
 
}