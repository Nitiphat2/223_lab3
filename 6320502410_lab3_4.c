#include<stdio.h>
int main()
{
    int x,i,j=0,p;
    scanf("%d",&x);
    while(x!=p)
    {
        for(i=2;i<=x;i++)
        {
            if(i==x&&j==0)
            {
                p=i;
            }
            else if(x%i==0)
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
