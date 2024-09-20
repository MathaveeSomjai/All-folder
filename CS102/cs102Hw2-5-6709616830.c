#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int n)
{
    if (n < 2)
    {
        return false; // Prime numbers are greater than or equal to 2
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false; // If divisible, it's not prime
        }
    }
    return true;
}

int main()
{
    int num;

    // Loop to check multiple inputs (example 3 cases)
    for (int i = 0; i < 3; i++)
    {
        printf("Please enter an integer <between 2 to 99999999>: ");
        scanf("%d", &num);

        if (num < 2 || num > 99999999)
        {
            printf("%d is not between 2 to 99999999, please re-enter.\n", num);
            i--; // Ask for input again
        }
        else
        {
            if (is_prime(num))
            {
                printf("%d is a prime number.\n", num);
            }
            else
            {
                printf("%d is not a prime number.\n", num);
            }
        }
    }

    return 0;
}
