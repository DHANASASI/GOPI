#include <stdio.h>

int main()
{
    int n, num, rev = 0;

    /* Read a number from user */
    printf("Enter any number to check palindrome: ");
    scanf("%d", &n);

    num = n; // Copy original value to num.

    /* Find reverse of n and stores in rev */
    while(n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n = n / 10;
    }

    /* Check if reverse is equal to original num or not */
    if(rev == num)
    {
        printf("%d is palindrome.", num);
    }
    else
    {
        printf("%d is not palindrome.", num);
    }

    return 0;
}
