 #include<stdio.h>
 int main()
 {
     int i,n,num1=0,num2=1,num3 ;
     printf("Enter any number=\n");
     scanf("%d",&n);
     printf("%d%d",num1,num2);
     for(i=3;i<n;i++)
     {
         num3=num1+num2;
         printf("%d",num3);
         num1=num2;
         num2=num3;
     }
        getch();
 }
