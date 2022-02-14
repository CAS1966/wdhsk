

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
checkformat1函数简介：
检查输入的格式是否符合。缺陷是要求整型，浮点型赋给整型时，不会报错。
注释1：fflush函数可移植性差
注释2：EOF:通常是无数据可读是才会发生这种情况，例如，当标准输入被重定向到一个输入文件时，
程序执行函数scanf（）就是从该文件中读入数据，当读到文件尾没有数据可读时，函数scanf（）调用就会失效
*/
