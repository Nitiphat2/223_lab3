#include<stdio.h>
int main()
{
    int a=0,num,i,j=0,n[10000],l=0;
    scanf("%d",&num);
    for(a=2; a<num; a++)
    {
        for(i=2; i<=a; i++)
        {
            if(a==i&&j==0)
            {
                n[l]=a;
                l++;
            }
            else if(a%i==0)
            {
                j++;
            }
        }
        j=0;
    }
    int count=1,k=num,o=1,e;
    for(e=0;k>1,e<l;e++)
    {
        if(k%n[e]==0)
        {
            k=k/n[e];
            if(k != o)
            {
                count++;
            }
        }
    }
}
