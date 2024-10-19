/*
    Program to Check if a Number is positive, negative or zero
*/

#include<stdio.h>

int main()
{
    printf("Program to Check if a Number is positive, negative or zero by using *Ladder If Else*\n\n");
    
    int no;
    printf("Enter the number : ");
    scanf("%d", &no);
    
    if(no < 0)
    {
        printf("\nThe given number is negative");
    }
    else if(no > 0)
    {
        printf("\nThe given number is positive");
    }
    else if(no == 0)
    {
        printf("\nThe given number is zero");
    }
    else
    {
        printf("Enter the valid input");
    }
    
    return 0;
}
