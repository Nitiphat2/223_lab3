#include<stdio.h>
int main()
{
    int n,p,i,a,j;
    scanf("%d",&n);
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&x[i],&y[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i] == x[j])
            {
                y[i]=y[i]+y[j];
                y[j]=0;
                x[j]=NULL;
            }
        }
    }
    int max=0;
    for(i=0;i<n;i++)
    {
        if(max < y[i])
        {
            max=y[i];
            j=i;
        }
    }
    printf("%d %d",j+1,max);
}
