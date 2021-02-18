#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,j=0,a,p,r=0;
    scanf("%d",&num);
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
            for(i=0;a>0;i++)
            {
                a=a/10;
            }
            int t[i],l,m=0;
            a=p;
            i--;
            for(l=i;l>=0;l--)
            {
                 m = m +(a%10)*pow(10,l);
                 a = a/10;
            }
            if(m == num)
            {
                printf("%d",m);
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
