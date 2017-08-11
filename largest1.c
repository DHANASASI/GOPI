#include<stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter first number "); 
    scanf("%d",&a); 
    printf("\nEnter second number ");
    scanf("%d",&b);   
    printf("\nEnter third number ");
    scanf("%d",&c);
 
   if(a>b && a>c)
   printf("\n%d is the greatest number ",a);
   else if(b>c)
   printf("\n%d is the greatest number ",b);
   else
   printf("\n%d is the greatest number ",c);
 }
