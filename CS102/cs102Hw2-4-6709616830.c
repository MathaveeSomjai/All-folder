#include <stdio.h>

int main()
{
    int start, end;

    // Ask user for input
    printf("Please enter the beginning integer: ");
    scanf("%d", &start);

    printf("Please enter the last integer: ");
    scanf("%d", &end);

    printf("All the numbers that can be divided by 13 are:\n");

    // Loop through the range
    for (int i = start; i <= end; i++)
    {
        if (i % 13 == 0)
        {
            printf("%d\n", i);
        }
    }

    printf("Bye!!\n");
    return 0;
}