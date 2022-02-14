写在前边的话：函数1，2都不好，网上绝对有检查输入格式是否正确的轮子，目前不找了，以后找。   2022/2/14

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

int checkformat1()
{
	double num;
	int status;
	printf("input the value of num:\n");
	status=scanf("%lf",&num);
	if(status ==0)
	{
		printf("enter error\n");
		fflush(stdin);//注释1
	}
	else if(status == EOF)  //注释2   
	{
		printf("input failure occurs\n");
	}
	else
		printf("num=%f\n",num);
    return 0;
	 
/*
c language

函数1：checkint函数简介：
输入数值并检查其是否为整数，缺陷是输入字符时程序出错。
输入数值并检验其是不是整数，不是则重新输入，返回值为正确输入的整数。一次只能检验一个，函数参数c为当前输入的是第c个数。

函数2：checkformat1函数简介：
检查输入的格式是否符合。缺陷是要求整型，浮点型赋给整型时，不会报错。
注释1：fflush函数可移植性差。
注释2：EOF:通常是无数据可读是才会发生这种情况，例如，当标准输入被重定向到一个输入文件时，
程序执行函数scanf（）就是从该文件中读入数据，当读到文件尾没有数据可读时，函数scanf（）调用就会失效。

*/
