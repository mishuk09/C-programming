#include<stdio.h>

struct person{
    int age;
    float salary;
};

int  main(){
 struct person person1,person2;
 
 
 person1.age=23;
 person1.salary=12000.56;

 person2.age=45;
 person2.salary=34555.21;

printf("Person one detils Below\n");
printf("Person1 Age=%d\n",person1.age);
printf("Person1 Salary=%f \n",person1.salary);

printf("Person two detilas below\n");

printf("Person 2 age=%d \n ",person2.age);
printf("Person2 Salary=%f",person2.salary);


return 0 ;
} 