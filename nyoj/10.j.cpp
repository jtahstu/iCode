/*吃货的世界你不懂~
时间限制：1000 ms  |  内存限制：65535 KB
描述
大耗子到仓库看小耗子，小耗子一脸颓唐，大耗子：“土豪，肿么了，咦- -，小仓库里的成dun的零食呢？”；“555...被吃光了 被吃光了 。。。都被小静吃光了！！”。

故事的开始是这样的，小耗子有从1,2,3,4,5...n仓库（零食的储量也是1~n），小静参观了仓库，下决心要在最短的时间内把零食全部吃光（即1~n号仓库全部为0）。小静每次可以选择只吃一个或者多个仓库，每次吃掉相同的数量。比如，1,2,3可以把2和3同时减去2，得到1,0,1，再同时吃掉1,1.。小耗子正沉浸在悲痛之中 T.T，算不出来这个最短时间是多少，你们来告诉他一下吧~

ps：每吃一次一个单位时间。



输入
输入多组数据。每组一行，为一个正整数n（n<=1000000000，小静超级能吃(╯3╰)），以EOF标志结束。
输出
对每组数据，输出吃光仓库最少的时间。
样例输入
1
2
3
样例输出
1
2
2
来源
十九永慧的灵感
上传者
ACM_胡皓*/
#include "iostream"
#include "cstdio"
using namespace std;
int main(int argc, char const *argv[])
{
	long long n;
	while(cin>>n)
	{
		cout<<n/2+1<<endl;
	}
	return 0;
}
