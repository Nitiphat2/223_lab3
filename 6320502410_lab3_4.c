#include<stdio.h>
int main()
{
    unsigned long long int x,i,j=0,p;
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
            j=0;
            if(x!=p)
            {
                x--;
            }
        }
        printf("%llu",p);
    }
}
