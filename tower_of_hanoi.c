#include <stdio.h>
// Recursive call for solving tower of hanoi problem
void towerOfHanoi(int n, char source, char destination, char auxiliary) 
{
    if (n==1) 
	{
        printf("Move disk 1 from rod %c to rod %c\n", source, destination);
        return; 
    }
    towerOfHanoi(n-1, source, auxiliary, destination);
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);
    towerOfHanoi(n-1, auxiliary, destination, source);
}

int main() {
    int n; //To store number of disk given by user
    char source = 'A', destination = 'C', auxiliary = 'B';

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("Tower of Hanoi solution for %d disks:\n", n);
    towerOfHanoi(n, source, destination, auxiliary);
	

    return 0;
}
