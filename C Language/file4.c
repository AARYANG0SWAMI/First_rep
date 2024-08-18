#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age.\n");
    scanf("%d", &age);
    printf("You have entered %d as your age.\n",age);
    if(age>=18){
        printf("You can vote!\n");
    }
    else if(age>=10){
        printf("your age is %d and you can vote for child.\n");
    }
    else if(age>=3)
    {
        printf("You are between 3 & 10 you can vot for babies.\n");
    }
    else{
        printf("You can not vote.\n");
    }
    return 0;
}