#include<stdio.h>
int main()
{
    int a=0,num,i,j=0,n[10000],l=0;
    scanf("%d",&num);
    for(a=2; a<num; a++)
    {
        for(i=2; i<=a; i++)
        {
            if(a==i&&a%i==0&&j==0)
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
}
