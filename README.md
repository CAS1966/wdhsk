# wdhsk
my function library
## C language
1. 输入数值并检查其是否为整数-checkint
int checkint(int c)
{
	int a;
	double b;
	do
 { printf("请输入第%d个整数:\n",c);
   scanf("%lf",&b);
 } while((int)b!=b);
 return(a=b);
}
/*
解释：
输入数值并检验其是不是整数，不是则重新输入，返回值为正确输入的整数。一次只能检验一个，函数参数c为当前输入的是第c个数。
*/
