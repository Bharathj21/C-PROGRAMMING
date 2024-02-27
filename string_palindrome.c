#include<stdio.h>
#include<string.h>
int main()
{
        char str[20];
        int i=0,len,palin=1;
        printf("enter a string:");
        scanf("%s",str);
        len=strlen(str);
        len--;
        while(i<len)
        {
                if(str[i]!=str[len])
                {
                        palin=0;
                        break;
                }
                i++;
                len--;
        }
        if(palin==0)
        {
                printf("%s is not a palindrome",str);
        }
        else{
                printf("%s is a palindronme",str);
        }
        printf("\n");
        return 0;
}
