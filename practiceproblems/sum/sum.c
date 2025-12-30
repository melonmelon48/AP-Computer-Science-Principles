#include <cs50.h>
#include
int main(void)
{
    int sum = 0;
    for (int i = 0; i <3; i++)
    {
        int number = get_int("Number: ");
        sum = sum + number;
    }
    printf("Sum: %i\n", sum);
}
