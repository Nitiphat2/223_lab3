#include<stdio.h>
int main()
{
    int n,p=0,i,a,j;
    scanf("%d",&n);
    if(n>=0&&n<=10000)
    {
        int x[n],y[n];
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&x[i],&y[i]);
            if((x[i]>0&&x[i]<=48)||(y[i]>=1&&y[i]<=50000))
            {
                p=1;
                break;
            }
        }
        if(p==0)
        {
            for(i=0; i<n; i++)
            {
                for(j=i+1; j<n; j++)
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
            for(i=0; i<n; i++)
            {
                if(max < y[i])
                {
                    max=y[i];
                    j=i;
                }
            }
            printf("%d %d",j+1,max);
        }
    }

}
