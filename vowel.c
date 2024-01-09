#include<stdio.h>
#include<string.h>
void vowel(char string[]);
int main(){
    char str1[100];
    printf("Enter the string to count number of vowels in: ");
    fgets(str1,100,stdin);
    
    vowel(str1);

    
    return 0;
    }
    void vowel(char string[]){
        int count=0;
       for(int i=0;string[i]!='\0';i++){
        if(string[i]=='a'||string[i]=='A'||string[i]=='e'||string[i]=='E'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'||string[i]=='u'||string[i]=='U'){
            count++;
        }
        }
        printf("No of vowels in the entered string is %d",count);
        int length=strlen(string);
        printf("\nNo of consonants in the entered string is %d", (length - count - 1));
        
    }