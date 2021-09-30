// For a school or college data
#include<stdio.h>

struct  student{
    int rollno;
    char name[25];
    float cgpa;
};
int main(){
    struct student s1;
    printf("Enter the Roll no, Name, cgpa\n ");
    scanf("%d%s%f",&s1.rollno,&s1.name,&s1.cgpa);

    printf("Data of the student is shown below:\n ");
    printf("\n Roll no = %d , Name = %s , C.G.P.A = %f",s1.rollno,s1.name,s1.cgpa);
    return 0;

}

