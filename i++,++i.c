#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)//increasing
        {
            printf("%d",j);
        }
        for(j=1;j<=n-1;j++)
        {
            printf("\n"); //double space
        }
        /*for(j=1;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");*/
    }
}
