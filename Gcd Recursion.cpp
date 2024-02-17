#include<stdio.h>

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b); //swap the value 
}

int main()
{
    int a, b, result;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a ,&b);
    result = gcd(a, b);
printf("The GCD of the given two numbers  of %d and %d is %d  " ,a,b,result);
    return 0;
}

