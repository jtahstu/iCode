/*数数小木块
时间限制：3000 ms  |  内存限制：65535 KB
难度：1
描述
在墙角堆放着一堆完全相同的正方体小木块，如下图所示：


 因为木块堆得实在是太有规律了，你只要知道它的层数就可以计算所有木块的数量了。
现在请你写个程序 给你任一堆木块的层数，求出这堆木块的数量.

输入
第一行是一个整数N(N<=10)表示测试数据的组数）
接下来的n行 每行只有一个整数 ，表示这堆小木块的层数，
输出
对应每个输入的层数有一个输出，表示这堆小木块的总数量，每个输出占一行
样例输入
2
1
5
样例输出
1
35*/
#include "iostream"
using namespace std;
int main()
{
    int n,i,a,b[10001],sum;
    cin>>n;
     b[0]=0;
     for(i=1;i<=10001;i++)
          {b[i]=b[i-1]+i;}
    while(n--)
    {
        sum=0;
        cin>>a;
            for(i=1;i<=a;i++)
              {sum+=b[i];}
        cout<<sum<<endl;
    }
    return 0;
}
