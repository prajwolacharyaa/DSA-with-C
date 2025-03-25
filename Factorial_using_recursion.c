//WAP to find factorial of any number given by user using recursion
#include<stdio.h>


int factorial(int n) 
{
    if (n == 0) 
	{
        return 1; // Base case: because factorial of 0 is 1
    }  
    else 
	{
        return n * factorial(n - 1); //function calling itself.
    }
}

int main() 
{
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    
    //To make sure that the number entered by user is not negative.
    if (num < 0) 
	{
        printf("Sorry! Can't find the factorial of negative number\n");
    } 
	else 
	{
        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }
    
    return 0;
   
}
