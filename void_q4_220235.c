#include <cs50.h>
#include <stdio.h>

int square(int n);

int main(void)
{
    int num = get_int("Enter number to square: ");
    int result = square(num);
    printf("%i\n", result);
}

int square(int n)
{
    return n * n;
}
