/*
 * 30.cpp
 * Created on: 2015年4月3日
 * Author: jtahstu
 */
//30分数之和
//求这样的四个自然数p,q,r,s(p<=q<=r<=s)，使得以下等式成立：
//1/p+1/q+1/r+1/s=1。
//
//*运行结果
//The 4 fractions which sum is equal 1 are:
//[ 1] 1/2+1/3+1/7+1/42=1
//[ 2] 1/2+1/3+1/8+1/24=1
//[ 3] 1/2+1/3+1/9+1/18=1
//[ 4] 1/2+1/3+1/10+1/15=1
//[ 5] 1/2+1/3+1/12+1/12=1
//[ 6] 1/2+1/4+1/5+1/20=1
//[ 7] 1/2+1/4+1/6+1/12=1
//[ 8] 1/2+1/4+1/8+1/8=1
//[ 9] 1/2+1/5+1/5+1/10=1
//[10] 1/2+1/6+1/6+1/6=1
//[11] 1/3+1/3+1/4+1/12=1
//[12] 1/3+1/3+1/6+1/6=1
//[13] 1/3+1/4+1/4+1/6=1
//[14] 1/4+1/4+1/4+1/4=1
//1/p>=1/4，即p<=4  因为后面都小于或等于1/p，所以1/p>=1/4
//1/q>=1/3(1-1/2),即q<=6
//1/r>=1/2(1-1/2-1/3),即r<=12
//1/s>=1-1/2-1/3-1/7,即s<=42
#include<iostream>
#include<cstdio>
using namespace std;
int main30() {
	int count = 1;
	for (int p = 0; p <= 4; p++)
		for (int q = p; q <= 6; q++)
			for (int r = q; r <= 12; r++)
				for (int s = r; s <= 42; s++)
					if (1.0 / p + 1.0 / q + 1.0 / r + 1.0 / s == 1) {
						cout << count++ << "  1/" << p << "+1/" << q << "+1/"
								<< r << "+1/" << s << "=1" << endl;
					}
	return 0;
}

