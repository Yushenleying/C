#include <stdio.h>
/*
int main()
{
	//const修饰的常变量
	const int num = 4; //常属性，不能更改
	printf("%d\n",num);
	num = 8; // 报错
	printf("%d\n",num);
	return 0;
}
*/
/*
int mian()
{
	const int n = 10; // n是变量，但是又有常属性，所以我们说n是常变量。
	int arr[n] = { 0 }; //这里报错，数组内的 n 应输入常量表达式。
	return 0;
}
*/
/*
#define MAX 10 //define定义的标识符 常量 
int main()
{
	//define定义的标识符常量
	int arr[MAX] = { 0 };
	printf("%d\n",MAX);
	return 0;
}
*/

enum Sex
{
	//一 一列举
	MALE,
	FEMALE,
	SECRET
};
//MALE FEMALE SECRET-枚举常量
int main()
{
	printf("%d\n",MALE);	 //打印输出的值为0
	printf("%d\n", FEMALE);  //1
	printf("%d\n", SECRET);  //2
	return 0;
}

