#include <stdio.h>
int main(){
    int base, exponent, counter, result = 1;
    printf("Enter base and exponent \n");
    scanf("%d %d", &base, &exponent);
     
    /* Calculate base^exponent by repetitively multiplying base */
    for(counter = 0; counter < exponent; counter++){
        result = result * base;
    }
     
    printf("%d^%d = %d", base, exponent, result);
    return 0;
}
