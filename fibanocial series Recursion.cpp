#include<stdio.h>

int fibo(int); // Function Prototype

int main()
{
 int num,f;
 printf("Enter the number : ");
 scanf("%d", &num);
 for( int i=1;i<=num;i++)
 {
  f = fibo(i); /* Normal Function Call */
  printf("%d \t", f);
 }
}

int fibo(int num) /* Function Definition */
{
 if(num== 1)  //base condition
 {
  return(0);
 }
 else if(num== 2)
 {
  return(1);
 }
 else
 {
  return( fibo(num-1) + fibo(num-2) ); /* Recursive call as fib() calls itself */
 }
}
