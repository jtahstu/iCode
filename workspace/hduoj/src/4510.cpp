/**
 * Project Name: hduoj
 * File Name: 4510.cpp
 * Created on: 2015年4月13日 下午8:54:52
 * Author: jtahstu
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//小Q系列故事——为什么时光不能倒流
//Problem Description
//
//　　我以为我会是最坚强的那一个 我还是高估了自己
//　　我以为你会是最无情的那一个 还是我贬低了自己
//
//　　就算不能够在一起 我还是为你担心
//　　就算你可能听不清 也代表我的心意
//
//　　那北极星的眼泪 闪过你曾经的眼角迷离
//　　那玫瑰花的葬礼 埋葬的却是关于你的回忆
//
//　　如果时光可以倒流 我希望不要和你分离
//　　如果注定分离 我希望不要和你相遇
//
//　　　　——摘自《小Q失恋日记 》第17卷520页
//
//　　这是码农小Q第58次失恋了，也是陷得最深的一次。
//　　要知道，小Q自从第一次到腾讯公司报到，就被风姿绰约的前台MM彻底迷住了，这1000多个日日夜夜他无时无刻不在憧憬着他们美好的未来。为了能见到MM，他每天早到晚归，甘愿加班，连续3年被评为优秀员工，并且以全公司最快的速度晋级到四级岗位。就在他终于鼓足勇气准备表白的时候，MM却满面春风地送来了一包喜糖......
//　　现在小Q专门请了年休假治疗情伤，但情绪总不见好转，每天足不出户，眼睛盯着墙上的钟表，反复念叨：“表白要趁早，时光不倒流，表白要趁早，时光不倒流......”
//　　假设现在已知当前的时间，让时间倒退回若干，你能计算出钟表显示的时间吗？
//
//
//Input
//输入首先包含一个整数N，表示有N组测试用例。
//接下来的N行表示N个测试用例，每行包括2个时间HH:MM:SS hh:mm:ss
//HH:MM:SS表示当前的时间，hh:mm:ss表示希望倒退回去的时间。
//[Technical Specification]
//00<=HH<=11
//00<=hh<=99
//00<=MM, SS, mm, ss<=59
//
//
//Output
//请计算并输出钟表倒退后显示的时间，要求输出格式为HH:MM:SS（即时分秒均显示2位，不足则补0），每组数据输出占一行。
//
//
//Sample Input
//2
//11:28:32 02:14:21
//05:00:00 96:00:01
//
//
//Sample Output
//09:14:11
//04:59:59
//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//using namespace std;
//int main4510()
//{
//	int n;
//	cin>>n;
//	while(n--){
//		int a,b,c,x,y,z;
//		scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&x,&y,&z);
//		while((a*3600+b*60+c)<(x*3600+y*60+z)){
//			a+=24;
//		}
//		if((a*3600+b*60+c)==(x*3600+y*60+z))
//			cout<<"00:00:00"<<endl;
//		int ans1=(a*3600+b*60+c-x*3600-y*60-z)/3600;
//		int ans2=(a*3600+b*60+c-x*3600-y*60-z)%3600/60;
//		int ans3=(a*3600+b*60+c-x*3600-y*60-z)%60;
//		if(ans1>=12)ans1-=12;//这里，fuck you!
//		ans1<10?cout<<"0"<<ans1<<":":cout<<ans1<<":";
//		ans2<10?cout<<"0"<<ans2<<":":cout<<ans2<<":";
//		ans3<10?cout<<"0"<<ans3<<endl:cout<<ans3<<endl;
//	}
//	return 0;
//}

