#include<stdio.h>
int main()
{ 
    int n;
    printf("input");
    scanf("%d",&n);
    if((n<=2000)&&(n>0))
    {
        printf("Time estimated = 25 minutes ");
    }
    else if ((n>=2001)&&(n<= 4000))
    {
        printf("Time estimated = 35 minutes ");
    }
    else if ((n>4000)&&(n<7000))
    {
        printf("Time estimated = 45 minutes ");
    }
    else
    {
        printf("OVERLOADED");
    }
    return 0;
}