#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }
/**
*i cause an infinite loops because it is always less than 10
* i is not increment and will always cause infinite loop
*/
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
