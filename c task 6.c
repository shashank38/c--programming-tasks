WRITE A C PROGRAM TO CHECK IF THE GIVEN NUMBER IS AN ARMSTRONG NUMBER OR NOT
#include<stdio.h>
int main()
{
    int n,s,sum=0,temp;
    printf("enter the number=");
    scanf("%d",&n)
    temp=n;
     {
        s=n%10;
        sum=sum+(s*s*s);
        n=n/10;
     }
    if (temp==sum)
    {
        printf("the number %d is an armstrong number",temp);
    }
    else
    {
        printf("the number %d is not armstrong number",temp);
    }
    return 0;
}
