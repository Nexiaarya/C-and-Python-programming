#include<stdio.h>
int main()
{ 
  int N=10,K=5,n;
  printf("input");
  scanf("%d",&n);
  if((n>N)&&(n<=0))
  {
 printf("invalid input");
  }
    else
    {
        printf("Number of candies sold %d",n);
        if(N-n<=K)
        {
            N=10;
        printf("\nNumber of candies available %d",N);
        }
        else 
        {
            printf("\nNumber of candies available %d",N-n);
    }
}
    return 0;
}
