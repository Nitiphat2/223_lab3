#include<stdio.h>
int main()
{
    unsigned long long int x,i,j=0,p=1;
    scanf("%llu",&x);
    if(x>=0&&x<=2000000000)
    {
        while(x!=p)
        {
            for(i=2; i<=x; i++)
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
            if(x!=p)
            {
                x--;
            }
            else
            {
                j=0;
            }
        }
        printf("%llu",p);
    }
}
