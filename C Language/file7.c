#include <stdio.h>

int main()
{
    int age, marks;
    printf("Please enter your age\n");
    scanf("%d", &age);

    switch(age)
    {
        case 3:
        printf("Your age is 3.\n");
        break;
        printf("Please enter your marks.\n");
        scanf("%d", marks);
        switch (marks)
        {
        case 45:
            Printf("Your marks are 45.\n");
            break;
        
        default:
            break;
        }

        case 13:
        printf("Your age is 23\n");
        break;

        case 23:
        printf("Your age is 23.\n");
        break;

        

default:
printf("Your age is not 3, 13 or 23\n");
    }



return 0;
    }

