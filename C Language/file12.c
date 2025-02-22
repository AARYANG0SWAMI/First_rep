#include<stdio.h>
/*Code for Even and odd number*/
int main()
{
    int num;
    printf("Please entere the number: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("The number is even\n");

    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}