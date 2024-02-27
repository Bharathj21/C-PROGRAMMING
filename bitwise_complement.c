#include<stdio.h>
int main()
{
        int a,b;
        printf("enter a value:");
        scanf("%d",&a);
        b=~a;
        printf("bit wise not value of %d is %d",a,b);
        return 0;
}
