#define _CRT_SECURE_NO_WARNINGS 1.
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//register int a = 10; 建议将a定义为寄存器变量register
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int；有符号的
//	//unsigned int num = 0 ; 无符号的
//	return 0;
//}
//int main()
//{
//	typedef unsigned int U_int; //typedef--类型定义，类型名重定义
//	unsigned int num1 = 10;
//	U_int num2 = 20;
//	return 0;
//}
//
//	void test()
//{
//		//static 修饰的局部变量生命周期变长
//	static int a = 1;//static 是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a); //输出答案为 a = 22222,如果加上static输出结果为23456；
//}
//	int mian()
//{
//	int i = 0;
//	while(i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	//static 修饰局部变量，改变的是局部变量生命周期变长
//	//static 修饰全局变量，改变的是全局变量作用域，让静态的全局变量只能在自己所在的源文件内部使用
//	//extern--声明外部符号的
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//	return 0;
//}

//int main()
//{
//	//extern--也可声明外部函数
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

////宏的定义
//#define MAX(X, y)(X>Y?X: Y)
////#define MAX 100 //define--定义的标识符常量
//				//define--可以定义宏--带参数
//int main()
//{
//	//int a= MAX
//	int a = 10;
//	int b = 20;
//		//函数的方式
//		int max = Max(a, b);
//		printf("max = %d\n", max);
//	//宏的方式
//		max = Max(a, b);
//		//max=(a>b?a: b)
//		printf("max = % d\n", max);
//		return 0;
//}
//------------指针
//int main()
//{
//	int a = 10; //4个字节
//	int* p = &a; //取地址
//	*p = 20; // * -解引用操作符（改变数为20）
//	printf("a = %d\n",a);
//	//有一种变量是用来存放地址的--指针变量
//	printf("%p\n",&a);
//	return 0;
//	//注意：指针大小在32位平台是4个字节，64位平台是8个字节。
//}
//int main()
//{
//	char ch = 'w'; //
//	char* pc = &ch; //& 将ch这个符号的地址存放在pc里（取地址）
//	printf("%d\n", sizeof(pc));
//	*pc = 'a'; //  解引用操作符，将pc里的地址的值替换为字符‘a’
//	printf("%c\n", ch);
//	return 0;
//}

//-----结构体
struct Book
{
	char name[50];
	short price;
};
int main()
{
	struct Book b1 = { "C语言程序设计",55 };
	strcpy(b1.name, "C++"); //strcpy -字符串拷贝-库函数 string.h
	printf("%s\n", b1.name);
	b1.price = 15; //更改价格
	struct Book* pb = &b1;//取b1的地址存放在pb里
	//.   结构体变量，成员
	//->  结构体指针，成员  
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//除上面两种打印方法还有：
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	//printf("书名：%s\n",b1.name);
	//printf("价格：%d\n", b1.price);
	return 0;
}