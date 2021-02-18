#include<stdio.h>
int main()
{
    int m[5],n[5]={0};
    int i,j,k;
    int max = 0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            scanf("%d",&m[j]);
            n[i]=n[i]+m[j];
        }
        if(max < n[i])
        {
            max = n[i];
            k=i;
        }
    }
    printf("%d %d",k+1,max);
}
