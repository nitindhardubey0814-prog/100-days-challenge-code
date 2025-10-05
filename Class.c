#include <stdio.h>

int main()
{
    int a= 5 ,b=3;

    printf("a=%d,b=%d\n\n",a,b);
    
    //logical AND 
    printf("a > 0 && b > 0 : %d\n",(a > 0 && b > 0));

    //logical OR
    printf("a > 0 || b > 0 : %d\n",(a > 0 || b > 0));

    //logical NOT
    printf("!(a > 0) : %d\n", !(a > 0));

    return 0;
}