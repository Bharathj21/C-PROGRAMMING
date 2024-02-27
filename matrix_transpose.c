#include<stdio.h>
int main()
{
        int a[10][10],b[10][10],i,j,r,c;
        printf("enter no. of rows & cols:");
        scanf("%d%d",&r,&c);
        printf("enter the elements:");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        scanf("%d",&a[i][j]);
                }
        }
        printf("the order of the matrix is %d * %d\n",r,c);
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%2d",a[i][j]);
                }
                printf("\n");
        }
        printf("the transpose of the matrix is :\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        b[i][j]=a[j][i];
                }
        }
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%2d",b[i][j]);
                }
                printf("\n");
        }
        return 0;
}
