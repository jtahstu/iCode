#include<stdio.h>
void main()
{
    int n;
    float sum1,sum2;
    for(n=11;;n++)
    {
        sum1=(n+9)/10.0;
        sum2=(9*n+171)/100.0;
        if(sum1!=(int)sum1)continue;
        if(sum2!=(int)sum2)continue;
        if(sum1==sum2)break;
    }
    printf("共有%d个学生\n将糖果分成了%d份",(int)(n/sum1),n);
    printf("\n");
}
