#include<stdio.h>
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
        printf("\n\n.%d",p);
        if(p==num)
        {
            a=p;
            for(i=0;a>0;i++)
            {
                a=a/10;
            }
            int t[i],l,m;
            a=p;
            i--;
            for(l=0;l<=i;l++)
            {
                 m = (a%10)*pow(10,i);
                 a = a/10;
            }
            printf("%d",m);
            if(m == num)
            {
                printf("%d",m);
                r=1;
            }
            else
            {
                num--;
                j=0;
            }
        }
        else
        {
            num--;
            j=0;
        }
    }
}
