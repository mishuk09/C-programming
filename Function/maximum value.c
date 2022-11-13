 #include<stdio.h>

int  max(int a[])
{   int i,max=a[0];
    for(i=0;i<5;i++)
    {
       if(max<a[i]);
       max=a[i];
    }
     return max;
}




int main()
{

    int num[]={10,20,30,40,50};

    int maximum=max(num);
    printf("%d",maximum);

}
