#include<stdio.h>
 int main()
{
    float x;
    int i;
    x=5.6;
    i=(int)x;/*其一般形式为；（类型名）（表达式）
                注意，表达式应该用括号括起来。
                （int）x不要写成int（x）*/

    printf("x=%f,i=%d",x,i);
    return 0;
}
/*运行结果如下
x=5.600000,i=5
x类型认为float型，值任等于5.6*/

//类型转换的原则是从低级向高级自动转换（除非人为地加以控制）。
//计算的转换顺序如下所示；字符型->整型->长整型->浮点型->单精度型->双精度型
