#include<stdio.h>
int fact(int c);
int main()
{
        int num,a;
        printf("enter a value:");
        scanf("%d",&num);
        a=fact(num);
        printf("factorial is %d",a);
        return 0;
}
int fact(int b)
{
        if(b==1)
                return 1;
        else
                return b*fact(b-1);
        
} 
