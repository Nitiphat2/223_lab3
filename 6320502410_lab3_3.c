#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i,j;
    for(i=2;x>1;)
    {
        if(x%i==0)
        {
            x=x/i;
            printf("%d\n",i);
            if(x==1)
            {
                printf("0");
            }
        }
        else
        {
            i++;
        }
    }
}
