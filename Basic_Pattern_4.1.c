#include<stdio.h>
int main()
{
    int i,j,n,k;
    scanf("%d",&n);
    k=n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=n;j++)
            {
                printf("0 ");
            }
        }
        else
        {
            for(j=1;j<=n;j++)
            {
                printf("1 ");
            }
        }
        printf("
");
    }
}