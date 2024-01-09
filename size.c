#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr;
    int s,inc;
    printf("Enter the number of prices you want to store");
    scanf("%d",&s);
    ptr=(float *) malloc(s*sizeof(float));
   printf("Enter %d Prices\n",s);
    for(int i=0;i<s;i++){
        scanf("%f", &ptr[i]);
    }
    printf("\n\n Printing prices stored\n"); //This is a comment!
    for(int i=0;i<s;i++){
        printf("%f\t",ptr[i]);
    }
    printf("Enter the values you want to store more : ");
    scanf("%d",&inc);
    ptr=realloc(ptr,(s+inc));
    printf("Enter %d more Prices\n",inc);
    for(int i=s;i<(s+inc);i++){
        scanf("%f", &ptr[i]);
    }
    printf("\n\n Printing all thd prices stored\n");
    for(int i=0;i<(s+inc);i++){
        printf("%f\t",ptr[i]);
    }



    free(ptr);

    return 0;
}
