#include<stdio.h>
int main()
{
        int rem,num,sum=0,temp;
        printf("enter a number:");
        scanf("%d",&num);
        temp=num;
        while(num>0)
        {
                rem=num%10;
                sum=sum+(rem*rem*rem);
                num=num/10;
        }
        if(temp==sum)
        {
                printf("the number is amstrong number");
        }
        else
        {
                printf("not an amstrong number");
        }
}
