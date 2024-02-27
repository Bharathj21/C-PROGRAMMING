#include<stdio.h>
int main()
{
        int a=0,b=1,c;
        int i,num;
        printf("enter a number:");
        scanf("%d",&num);
        printf("%4d%4d\t",a,b);
        for(i=0;i<num;i++)
        {
                c=a+b;
                printf("\t%d",c);
                a=b;
                b=c;
        }
        return 0;
}
