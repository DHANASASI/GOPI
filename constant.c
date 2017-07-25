#include <stdio.h>
 
int main()
{
    char ch;
 
    /* Reads a character from user */
    printf("Enter any character: ");
    scanf("%c", &ch);
 
 
    // Condition for vowel
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("%c is VOWEL.", ch);
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        // Condition for consonant
        printf("%c is CONSONANT.", ch);
    }
 
    return 0;
} 
