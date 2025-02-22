#include<stdio.h>
int main()
{
    int n,c=0,i;
    printf("\nPlease enter the number\n");
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("\nThe number is prime\n");
    }
    else
    {
        printf("\nThe number is not prime\n");
    }
    return 0;
}