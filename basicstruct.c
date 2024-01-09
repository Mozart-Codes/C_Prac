#include<stdio.h>
#include<string.h>
struct student{
    int roll;
    char name[100];
    float cgpa;
};
int main(){
    struct student s;
        printf("\nEnter Roll number for student :");
        scanf("%d",&s.roll);
        printf("\nName for student : Akshay");
        strcpy(s.name,"Akshay");
        printf("\nEnter CGPA for student :");
        scanf("%f",&s.cgpa);
        printf("\n \n Printing details of students and their data\n");
        printf("Roll Number\tCGPA\tName\n");
        printf("%d",s.roll);
        printf("\t      %f\t",s.cgpa);
        printf("%s",s.name);  

    return 0;
}