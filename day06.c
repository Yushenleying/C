#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>
//---------分支与循环-------------------
// 
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ",i);
//		
//	}
//	return 0;
//}
//int main()
//{
//	char c;
//	c = getchar(); //从键盘（设备）接收一个字符并打印
//	putchar(c);
//	putchar('\n');
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //一直接收键盘输入的字符，如果输入EOF也不会停止循环
//	{						 //EOF--end of file文件结束标志
//		putchar(ch); //停止循环Ctrl+Z，Ctrl+C。
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("输入密码：>");
//	scanf("%s", password);
//	while((getchar())!= '\n');
//	{
//		;
//	}
//	printf("请确认密码(YES/NO)：>");
//	ret = getchar();
//	if (ret == 'YES')
//	{
//		printf("登陆成功！\n");
//	}
//	else
//	{
//		printf("登陆失败！\n");
//	}
//	return 0;
//
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		//if (i <= 10)
//			
//		if (i == 5)
//			//break;
//			continue;
//		printf("%d\n",i);
//	}
//	return 0;
//}
//------------循环语句-----------
//int main()
//{
//	//请问循环多少次？
//	int i = 0;
//	int j = 0;
//	for (i = 0, j = 0; j = 0; i++, j++)
//		j++;
//	return 0;
//	
//}

//------do while---------
//int main()
//{
//	int i = 0;
//	do
//	{	
//		if (i == 5)
//			//break; //0 1 2 3 4
//			//continue; // 0 1 2 3 4 死循环
//		printf("%d ", i);
//		i++;
//		}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	//计算n的阶乘
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
