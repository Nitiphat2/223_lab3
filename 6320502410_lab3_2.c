#include<stdio.h>
int main()
{
    int n,p,i,a,j;
    scanf("%d",&n);
    int x[48]={0},y[n];
    if(n>=0&&n<=10000)
    {

        for(i=0; i<n; i++)
        {
            scanf("%d%d",&p,&y[i]);
            switch(p)
            {
                case 1 : x[0] = x[0] + y[i];break;
                case 2 : x[1] = x[1] + y[i];break;
                case 3 : x[2] = x[2] + y[i];break;
                case 4 : x[3] = x[3] + y[i];break;
                case 5 : x[4] = x[4] + y[i];break;
                case 6 : x[5] = x[5] + y[i];break;
                case 7 : x[6] = x[6] + y[i];break;
                case 8 : x[7] = x[7] + y[i];break;
                case 9 : x[8] = x[8] + y[i];break;
                case 10 : x[9] = x[9] + y[i];break;
                case 11 : x[10] = x[10] + y[i];break;
                case 12 : x[11] = x[11] + y[i];break;
                case 13 : x[12] = x[12] + y[i];break;
                case 14 : x[13] = x[13] + y[i];break;
                case 15 : x[14] = x[14] + y[i];break;
                case 16 : x[15] = x[15] + y[i];break;
                case 17 : x[16] = x[16] + y[i];break;
                case 18 : x[17] = x[17] + y[i];break;
                case 19 : x[18] = x[18] + y[i];break;
                case 20 : x[19] = x[19] + y[i];break;
                case 21 : x[20] = x[20] + y[i];break;
                case 22 : x[21] = x[21] + y[i];break;
                case 23 : x[22] = x[22] + y[i];break;
                case 24 : x[23] = x[23] + y[i];break;
                case 25 : x[24] = x[24] + y[i];break;
                case 26 : x[25] = x[25] + y[i];break;
                case 27 : x[26] = x[26] + y[i];break;
                case 28 : x[27] = x[27] + y[i];break;
                case 29 : x[28] = x[28] + y[i];break;
                case 30 : x[29] = x[29] + y[i];break;
                case 31 : x[30] = x[30] + y[i];break;
                case 32 : x[31] = x[31] + y[i];break;
                case 33 : x[32] = x[32] + y[i];break;
                case 34 : x[33] = x[33] + y[i];break;
                case 35 : x[34] = x[34] + y[i];break;
                case 36 : x[35] = x[35] + y[i];break;
                case 37 : x[36] = x[36] + y[i];break;
                case 38 : x[37] = x[37] + y[i];break;
                case 39 : x[38] = x[38] + y[i];break;
                case 40 : x[39] = x[39] + y[i];break;
                case 41 : x[40] = x[40] + y[i];break;
                case 42 : x[41] = x[41] + y[i];break;
                case 43 : x[42] = x[42] + y[i];break;
                case 44 : x[43] = x[43] + y[i];break;
                case 45 : x[44] = x[44] + y[i];break;
                case 46 : x[45] = x[45] + y[i];break;
                case 47 : x[46] = x[46] + y[i];break;
                case 48 : x[47] = x[47] + y[i];break;
            }
        }
        int max=0;
        for(i=0; i<48; i++)
        {
            if(max < x[i])
            {
                max=x[i];
                j=i+1;
            }
        }
        printf("%d %d",j,max);
    }
    return 0;
}
