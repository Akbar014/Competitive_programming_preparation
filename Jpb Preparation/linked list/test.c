#include<stdio.h>
int main()
{
    int n=10;
    int f(int n);
    printf("%d",f(n));
}
int f(int n)
{
    if(n>0)
        return(n+f(n-2));
}