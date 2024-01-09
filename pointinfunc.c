#include<stdio.h>
int square(int s);
int _square(int *p);
int main(){
    int side;
    printf("Enter value of side to find square of: ");
    scanf("%d",&side);
    printf("Value of square of passed arguement: %d",square(side));
    printf("\nValue of side you entered: %d",side);
    

    printf("\n\n Now using same but using pointers");
    printf("\nValue of square of passed arguement: %d",_square(&side));
    printf("\nValue of side you entered after using a pointer: %d",side);
    
    
    return 0;
}
int square(int s){
s=s*s;
return s;
}
int _square(int *p){
*p =*p * *p;
return *p;
}