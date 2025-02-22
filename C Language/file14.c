#include<stdio.h>

int main()
{
    int arr[100],n,oddcount=0,Evencount=0,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
     scanf("%d",&arr[i]);
    }
    if(arr[i]%2==0)
    {
     Evencount=Evencount+i;
    }
    else
    {
     oddcount=oddcount+i;
    }
    printf("The sum of odd count is %d",oddcount);
    printf("The sum of even count is %d",evencount);
    return 0;
    
}