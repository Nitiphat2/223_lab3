#include<stdio.h>
int main()
{
    int x,i,j=0,p;
    scanf("%d",&x);
    while(x!=p)
    {
        for(i=2;i<=x;i++)
        {
            printf("%d\n",x);
            if(i==x&&j==0)
            {
                printf("%d",i);
                p=i;
            }
            else
            {
                j++;
            }
        }
        j=0;
        if(x!=p)
        {
            x--;
        }
    }
    printf("%d",p);
}
