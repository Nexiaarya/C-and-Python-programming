#include<stdio.h>
#include<string.h>
int main()
{ 
    char n[100];
    char General_Ward[] = "General Ward";
    char Semi_Private[] = "Semi-Private";
    char Private[] = "Private";
    int m,r;
    printf("enter Patient Name");
    scanf("%c",&n);
    printf("enter ward type (General Ward, Semi-Private, Private)");
    scanf("%c",&n);
    printf("Number of Days Admitted");
    scanf("%d",&m);
    if (strcmp(n, General_Ward) == 0)
    {
        printf("Total Bill = ₹1000");
    }
    else if (strcmp(n, Semi_Private) == 0)
    {
        printf("Total Bill = ₹2000");
    }
    else if (strcmp(n, Private) == 0)
    {
        printf("Total Bill = ₹5000"); 
        if(m==7)
        {
            r=((5*5000)/100);
            printf("Total Bill (After Discount)",r);
        }
        return 0;
    }