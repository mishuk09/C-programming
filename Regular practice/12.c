//Write a C program which accept student’s name, division, and marks for five different
//ubjects and calculate the total, define the grade and print the same.Write a C program
 //which accept student’s name, division, and marks for five different subjects and calculate
 // the total,
//define the grade and print the same


#include<stdio.h>
void main()
{
   float phy,che,math,FEE,AS,avg,sum,percent;

   printf("Mahadi Hasan Mishuk\nDivision:'D'") ;

   printf("Enter the marks of 5 subject=\n");
   scanf("%f %f %f %f %f\n",&phy, &che, &math, &FEE, &AS);

   sum=phy+che+math+FEE+AS;
   printf("Total marks is=%2.f\n",sum);

   percent=(sum/500)*100;
   printf("percent of mark=%2.f\n",percent);

   avg= sum/5;
   printf("Average mark of Mahadi=%f\n",avg);

  if ("avg>=90")
    printf("Grade= A ");
  else if ("avg>=80 && avg>90 ")
    printf("Grade=B ");
  else if("avg>=70 && avg>80")
    printf("Grade=C ");
else
    printf("Grade=D");




   getch();





}
