#include<stdio.h>
int main()
{
    unsigned long long int num,i,j=0,a,p,r=0;
    scanf("%llu",&num);
    while(r!=1)
    {
        for(i=2; i<=num; i++)
        {
            if(i==num&&j==0)
            {
                p=i;
            }
            else if(num%i==0)
            {
                j++;
            }
        }
        if(p==8)
        {
            p=0;
        }
        if(p==num)
        {
            a=p;
            for(i=0; a>0; i++)
            {
                a=a/10;
            }
            int t[i],l,m[i],h,b=0;
            a=p;
            i--;
            for(l=i,h=0; l>=0,h<=i; l--,h++)
            {
                m[l] = a%10;
                t[h] = a%10;
                a = a/10;
            }
            for(l=0;l<=i;l++)
            {
                if(m[l]==t[l])
                {
                    b=1;
                }
                else
                {
                    b=0;
                    break;
                }
            }
            if(b==1)
            {
                for(h=0;h<=i; h++)
                {
                    printf("%d",m[h]);
                }
                r=1;
            }
            else
            {
                num--;
            }
        }
        else
        {
            num--;
        }
        j=0;
    }
}
