#include <stdio.h>

int main() 
{
    int num;
    int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) 
	{
        printf("Factorial is not defined\n");
    } else {
        for (int i = 1; i <= num; i++) 
		{
            fact =fact*i;
        }
        printf("Factorial of %d = %d\n", num, fact);
    }

}
