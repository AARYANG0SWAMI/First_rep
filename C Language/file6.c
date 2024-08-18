#include <stdio.h>

int main()
{
    int age;
    printf("Please enter your age.\n");
    scanf("%d", &age);   
    
    switch (age)
    {
    case 3:
        printf("Your age is 3.\n");
        break;
 
    case 13:
        printf("Your age is 13.\n");
        break;
 
    case 23:
        printf("Your age is 23\n");
        break;
 
    default:
        printf("Your age is not 3,13 or 23.\n");
        break;
    }

    return 0;
}