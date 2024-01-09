#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string t convert all lowercase characters into upper case : ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>96){
            str[i]=str[i]-32;
        }
    }
    puts(str);
   
    
    return 0;
}