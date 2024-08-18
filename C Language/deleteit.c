#include<stdio.h>

int main()
{
    int age;
    printf("Please enter your age.\n");
    scanf("%d", &age);
    printf("You have entered %d as your age.\n",age);
    if(age>=18){
        printf("You can vote.\n");
    }
    else if(age<18){
        printf("You can vote for child.\n");
    }
    else if(age<=10){
    printf("You can vote only for babies.\n");
    }
    return 0;
}