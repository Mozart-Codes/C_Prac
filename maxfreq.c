#include<stdio.h>
#include<string.h>
int main()
{   
    int count,i,j,max=0;
    char s[100],maxrepeatedchar;
  
    printf("Enter  the string : ");
    gets(s);
    for(i=0;i<strlen(s);i++){
        count=0;
        for(j=0;j<strlen(s);j++){
            if(s[i]==s[j]){
                count++;
            }
            if(max<count){
                max=count;
                maxrepeatedchar=s[i];
            }
        }
    }
    printf("Highest frequecy is of char %c and it is %d times.",maxrepeatedchar,max);
 
	return 0;
 
     
     
}