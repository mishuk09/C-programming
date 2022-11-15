#include<stdio.h>

struct student
{
    char name[50];
    double Enrollment;
    double Mobile;
};



int main()
{
    struct student student1;

    student1.name[100];
    student1.Enrollment;
    student1.Mobile;

    printf("Enter student name=\n");
    gets(student1.name);

    printf("Enter student Enrollment=\n");
    scanf("%lf",&student1.Enrollment);


    printf("Enter student Mobile=\n");
    scanf("%lf",&student1.Mobile);


    printf("Name=%s\n",student1.name);
    printf("Enrollment=%lf\n",student1.Enrollment);
    printf("Mobile=%lf\n",student1.Mobile);





    getch();

}
