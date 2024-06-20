// Calculating factorial using recrusion

#include<stdio.h>
int factorial(int N);
int main()
{
    int N,f;
    printf("Enter the value of N:");
    scanf("%d",&N);
    f = factorial(N);
    printf("\nfactorial of %d = %d", N,f);
    return 0;
}
int factorial(int N)
{
    if(N==0)
    return 1;
    else
    return N * factorial(N-1);
}