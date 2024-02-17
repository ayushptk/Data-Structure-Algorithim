#include<stdio.h>

int fact(int); // function prototype
int main()
{
    int x,n;
    printf(" Enter the Number to Find Factorial :");
    scanf("%d",&n);

    x=fact(n); //actual paramater
    printf(" Factorial of %d is %d",n,x);

    return 0;
}
//formal paramater
int fact(int n) //fun declaration
{
	int result;
    if(n==0) //Terminating condition
        return(1);
        result= n*fact(n-1); //recursive condition
    return(result);
}
