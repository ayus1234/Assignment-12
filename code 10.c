/*Program to print the following pattern

5 4 3 2 1
4 3 2 1
3 2 1
2 1
1

*/

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        k=6-i;
        l=5;
        for(j=1;j<=5;j++)
        {
            if(j<=6-i)
            {
                printf("%d ",k);
                k=l-i;
                l--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    getch();
}