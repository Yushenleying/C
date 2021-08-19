#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib. h>//ststem
#include <string. h>//strcmp

//int main()
//{
//	//题目：找出数组中只出现一次的数
//	//第一种解法：
//
//	int arr[] = { 1,2,3,4,5,1,2,3,4 }; //数组元素可变，算法一样
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0; //count计数器
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//		}
//		if (count == 1)
//		{
//			printf("出现一次的数为：%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//第二种解法，使用异或^来解。
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int  i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^ arr[i];
//	}
//	printf("单独数为：%d\n",ret);
//	return 0;
//}

//int main()
//{
//	//控制电脑关机程序代码：
//	char input[20] = { 0 }; //存放数据
//	system("shutdown -s -t 40"); //关机
//	//system 专门用来执行系统命令的
//again:
//	printf("请注意！您的电脑将在40秒后关机，如果要取消此操作，请输入：我是猪。\n");
//	scanf("%s", input); // %s 打印字符串
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else {
//goto again; //如果输入错误，将跳到以上again。
//	}
//	return 0;
//}



