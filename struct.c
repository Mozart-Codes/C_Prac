#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[100];
    float cgpa;
};
int main(){
    struct student s[3];
    char temp[100];
    for(int i=0;i<3;i++){
        printf("\nEnter Roll number for student %d :",i+1);
        scanf("%d",&s[i].roll);
        printf("\nEnter Name for student %d :",i+1);
        scanf("%s",s[i].name);
        printf("\nEnter CGPA for student %d :",i+1);
        scanf("%f",&s[i].cgpa);
    }
    printf("\n \n Printing details of students and their data\n");
    printf("Roll Number\tCGPA\t\t\tName\n");
    for(int j=0;j<3;j++){
        printf("%d\t",s[j].roll);
        printf("\t%f\t\t",s[j].cgpa);
        puts(s[j].name);
    }
    
    
    return 0;
}