/*AC ,bar
ʱ�����ƣ�1000 ms  |  �ڴ����ƣ�65535 KB
����
  zsjingһֱ�����ƣ�Ϊʲô���˺���һ�¾Ϳ���AC������һ�������Wrong��?��......

�����෽���飬�����ڷ����ˡ�ԭ��ֻҪ���ύ�Ĵ��������һ��"printf("AC\n");"�Ϳ����ɽ��������������ˡ��ǲ��Ǻ����������ŵĻ���������ԡ�



   ����һЩ������Ե����ݡ���������ǶԵ����Ҫ�����AC�������������ţ�����֮���"NEXT_AC"��

�������RP��ʱ���ˡ�

����
����������ݡ�
ÿ�и���һ���ַ���A [] B = C�Ĺ̶���ʽ������A��B��С��64λ������[]��ʾ�������㡣��ϸ�����������
�����A��B��C�������������������ݱ�֤�Ϸ���
���
��������ǶԵġ����"AC"����֮"NEXT_AC".
��������
2 + 4 = 6
4 + 5 = 9
13 * 5 = 5
13 / 2 = 6
�������
AC
AC
NEXT_AC
AC
��Դ
ԭ��
�ϴ���
ACM_��ʫ��*/
#include<stdio.h>
int main()
{
    int a,c,e;
    char b;
    while(scanf("%d %c %d = %d",&a,&b,&c,&e)==4)
    {
        if((b=='+')&&e==a+c)printf("AC\n");
        else if((b=='-')&&e==a-c)printf("AC\n");
        else if((b=='*')&&e==a*c)printf("AC\n");
        else if((b=='/')&&e==a/c)printf("AC\n");
        else  printf("NEXT_AC\n");
    }
    return 0;
}