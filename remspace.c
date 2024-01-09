#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int j;
    printf("Enter the string you want to remove spaces from : ");
    fgets(str,100,stdin);
    for(int i=0;i<strlen(str);i++){
        if(str[i]==' ')
        {
            for(j=i;j<strlen(str);j++)
            {
            str[j]=str[j+1];
            }
        } 
    }
    puts(str);
    return 0;
}