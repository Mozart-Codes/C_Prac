#include<stdio.h>
#include<string.h>
typedef struct student{
    int roll;
    char name[100];
    float cgpa;
}stu;
int main(){
    stu s;
        printf("\nEnter Roll number for student :");
        scanf("%d",&s.roll);
        printf("\nName for student :");
        scanf("%s",s.name);
        printf("\nEnter CGPA for student :");
        scanf("%f",&s.cgpa);
        printf("\n \n Printing details of students and their data\n");
        printf("Roll Number\tCGPA\t\tName\n");
        printf("%d",s.roll);
        printf("\t      %f\t",s.cgpa);
        printf("\t%s",s.name);  

    return 0;
}