#include<stdio.h>

struct person
{
    char name[10];
    int age;
    float salary;
};
int main()
{


    struct person person1,person2;
    person1.name[10]="Mahadi";
    person1.age=30;
    person1.salary=20000;
    int i;
    for(i=0;i<1;i++)
{
    printf("Person1:\n");
    printf("Name :%s\n",person1.name[10]);
    printf("Age :%d\n",person1.age);
    printf("Salary :%2f",person1.salary);

}


getch();

}
