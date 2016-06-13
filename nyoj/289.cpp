#include<iostream>//01背包
#include<cstring>
using namespace std;
int main()
{
    int n,v,a[1005],b,c;
    while(cin>>n>>v)
    {
        memset(a,0,sizeof(a));
        if(n==0&&v==0)break;
        for(int i=0; i<n; i++)
        {
            cin>>b>>c; //重量和价值
            for(int j=v; j>=b; j--)//从后向前枚举，
                if( a[j-b]+c> a[j])//a[j]取a[j-b]+c、a[j]价值较大者
                    a[j] = a[j-b]+c;
        }
        cout<<a[v]<<endl;
    }
return 0;
}
//01背包详解
/*
题目
　　有N件物品和一个容量为V的背包。第i件物品的重量是c[i]，价值是w[i]。
求解将哪些物品装入背包可使这些物品的重量总和不超过背包容量，且价值总和最大。
基本思路
　　  这是最基础的背包问题，特点是：每种物品仅有一件，可以选择放或不放。
　　  用子问题定义状态：即f[i][v]表示前i件物品恰放入一个容量为v的背包可以获得的最大价值。
    则其状态转移方程便是：f[i][v]=max{f[i-1][v],f[i-1][v-c[i]]+w[i]} 。
    可以压缩空间，f[v]=max{f[v],f[v-c[i]]+w[i]}
　　  这个方程非常重要，基本上所有跟背包相关的问题的方程都是由它衍生出来的。
    所以有必要将它详细解释一下：“将前i件物品放入容量为v的背包中”这个子问题，
    若只考虑第i件物品的策略（放或不放），那么就可以转化为一个只牵扯前i-1件物品的问题。
    如果不放第i件物品，那么问题就转化为“前i-1件物品放入容量为v的背包中”，价值为f[i-1][v]；
    如果放第i件物品，那么问题就转化为“前i-1件物品放入剩下的容量为v-c[i]的背包中”，
    此时能获得的最大价值就是f [i-1][v-c[i]]再加上通过放入第i件物品获得的价值w[i]。
　　  注意f[v]有意义当且仅当存在一个前i件物品的子集，其费用总和为v。
    所以按照这个方程递推完毕后，最终的答案并不一定是f[N] [V]，而是f[N][0..V]的最大值。
    如果将状态的定义中的“恰”字去掉，在转移方程中就要再加入一项f[v-1]，
    这样就可以保证f[N] [V]就是最后的答案。至于为什么这样就可以，由你自己来体会了。
*/
