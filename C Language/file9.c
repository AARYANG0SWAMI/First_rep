#include<stdio.h>

int main()
{
    int index=0, num, sub=1;
    printf("Enter the number you want to print\n",&num);
    scanf("%d",&num);
   do
   {
      printf(" %d+1 = ",index);
      printf("%d\n",sub);
      index=index+1;
      sub= sub+1;
   } while (num>index);
   
    return 0;
}