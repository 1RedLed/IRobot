#include<stdio.h>
int main()
{
	int a,b;
	
	//用户输入两个整数
	printf("输入第一个整数: ");
	scanf("%d",&a);
	printf("输入第二个整数: ");
	scanf("%d",&b);
	
	//计算两个整数的和
	int sum = a + b;//可以想什么时候用变量就什么时候创建
	
	//输出结果
	printf("%d + %d =%d\n",a,b,sum);
	
	return 0;
	
	
}
