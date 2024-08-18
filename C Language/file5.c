#include <stdio.h>
/*hello this is my first code in vs studio*/
int main()
{
    int marks;


    printf("Enter subject you passed,for maths 1 for science 2 for both press 3\n");
    scanf("%d",&marks);
    printf("You have entered %d as your input.\n",marks);
    if(marks>=4){
        printf("Please enter the correct value.");
    }
    else if(marks>=3){
        printf("you are passed in both subject your gift is 45 rupees.\n");
    }
    else if(marks>=2){
            printf("You are passed only in science your gift is 15 rupess.\n");
        }
    else if(marks>=1){
            printf("You are passed only in maths your gift is only 15 rupees.\n");
        }
    
    
        return 0;
}
    
