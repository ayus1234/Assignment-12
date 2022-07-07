/*Program to print the following pattern

1000001
 10001
  101
   1

 */

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i && j<=8-i)
            {
                if(j==i || j==8-i)
                   k=1;
                else
                   k=0;

                printf("%d",k);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}