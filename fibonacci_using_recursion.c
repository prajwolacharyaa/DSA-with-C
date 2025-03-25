//WAP to find the fibonacci series using recursion
#include <stdio.h>
int fibonacci(int n)
{
    // base condition 
    if (n==0||n==1)
    {
        return n; 
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int num; //to store number of elements to display in the series
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); 
    int i;
    for (i = 0; i < num; i++)
    {
        printf("%d, ", fibonacci(i)); // calling fibonacci() function for each iteration and printing the returned value
    }
    return 0;
}
