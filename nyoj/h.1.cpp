/*—个简单的数学题
时间限制：1000 ms  |  内存限制：65535 KB
描述
    挖掘机技术哪家强，那么问题就来了？？

    现在有这样一个问题,（A/B） % P ≡ C(P素数,A % B ≡ 0)

    已知 B，P, n ≡ A % P;



输入
输入T组数据
输入三个数n，B，P（n,B,P在int范围内）
输出
输出 C
样例输入
3 4 5
样例输出
2
提示
“≡” 即为同余
比如：6 % 2 ≡ 0 , 7 % 5 ≡ 2 , 5 % 7 ≡ 5
上传者
ACM_张书军*/

#include<stdio.h>
int main()
{
    int n,b,p;
    scanf("%d%d%d",&n,&b,&p);
    printf("%d",n/(b%p));
    return 0;
}
