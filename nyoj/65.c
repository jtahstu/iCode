/*
另一种阶乘问题
时间限制：3000 ms  |  内存限制：65535 KB
难度：1

描述

    大家都知道阶乘这个概念，举个简单的例子：5！=1*2*3*4*5.现在我们引入一种新的阶乘概念，将原来的每个数相乘变为i不大于n的所有奇数相乘例如：5!!=1*3*5.现在明白现在这种阶乘的意思了吧！

    现在你的任务是求出1!!+2!!......+n!!的正确值(n<=20)

输入
    第一行输入一个a(a<=20)，代表共有a组测试数据
    接下来a行各行输入一个n.
输出
    各行输出结果一个整数R表示1!!+2!!......+n!!的正确值
样例输入

    2
    3
    5

样例输出

    5
    23


 */
//我的思路：开数组保存，输出
//一般设函数求解
/*#include <stdio.h>
int f(int n)
{
    int i,s=1;
    for(i=1; i<=n; i+=2)
        s*=i;
    return s;
}
int main()
{
    int a,n,i,s;
    scanf("%d",&a);
    while(a--)
    {
        s=0;
        scanf("%d",&n);
        for(i=1; i<=n; i++)
            s+=f(i);
        printf("%d\n",s);
    }
    return 0;
}*/
/*

/*
#include<iostream>
using namespace std;
int f(int n)
{
	if(n%2) return n==1?1:n*f(n-2);
	return f(n-1);
}
int g(int n)
{
	return n?g(n-1)+f(n):0;
}
int main()
{
	int n,m;
	cin>>n;
	while(n--)
	{
		cin>>m;
		cout<<g(m)<<endl;
	}
}*/
/*#include<iostream>
using namespace std;
int main()
{
	int n,m,r[]={0,1,2,5,8,23,38,143,248,1193,2138,12533,22928,158063,293198,2320223,4347248,38806673,73266098,727995173,1382724248};
	cin>>n;
	while(n--)
	{
		cin>>m;
		cout<<r[m]<<endl;
	}
}
 */
