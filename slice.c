#include<stdio.h>
#include<string.h>
void slice(char string[],int n,int m);
int main(){
    char str1[100];
    int n,m;
    printf("Enter the string to slice: ");
    fgets(str1,100,stdin);
    printf("\nEnter the index to slice from: ");
    scanf("%d",&n);
    printf("\nEnter the index to slice till: ");
    scanf("%d",&m);
    slice(str1,n,m);

    
    return 0;
    }
    void slice(char string[],int n,int m){
        char slstr[100];
        int i,j=0;
        i=n;
        while(i<=m){
            slstr[j]=string[i];
            i++;
            j++;
        }
        slstr[j]='\0';
        puts(slstr);
    }