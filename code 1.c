//Program to first N terms of Fibonacci Series

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,N,term1=-1,term2=1,term3;
    printf("Enter the number\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        term3=term1+term2;
        term1=term2;
        term2=term3;
        printf("%d ",term3);
    }
    getch();
}