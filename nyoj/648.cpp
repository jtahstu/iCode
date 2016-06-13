/*数字1的数量
时间限制：1000 ms  |  内存限制：65535 KB
难度：1
描述
给定一个十进制正整数N，写下从1开始，到N的所有正数，计算出其中出现所有1的个数。
例如：n = 12，包含了5个1。1,10,12共包含3个1，11包含2个1，总共5个1。
输入
输入N(0 <= N <= 10^9)
多组测试数据
输出
输出包含1的个数
样例输入
12
样例输出
5
来源
点头
上传者
ACM_王孝锋*/

#include<stdio.h>
int a[100001];
int main()
{
int i,t,n,sum=0;
for(i=1;i<100001;++i)
{
t=i;
while(t)
{
if(t%10==1)
sum++;
t/=10;
}
a[i]=sum;
}
while(~scanf("%d",&n))
{
printf("%d\n",a[n]);
}
return 0;

}