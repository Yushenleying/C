#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	//使用debug运行结果为死循环
//	//使用release结果为打印12个hehe
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n",i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d\n", 10-i);
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//
//int main()
//{
//
//	return 0;
//}

//int main()
//{
//	//使用debug运行结果为死循环
//	//使用release结果为打印12个hehe
//	//当使用调试的时候，会发现死循环的原因是当循环到arr[12]的时候
//	//i的值也跟着arr[12]变化，因为arr[12]和i的地址一样
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//模拟实现库函数：strcpy
//my_strcpy(char* dest, char* src) //此处的*dest等于arr1
//{
	//while (*src != '\0') //当*src不等于\0，意思是把happy放入arr2 也就是*dest里
	//{
	//	*dest = *src;
	//	*src++;
	//	*dest++;
	//}//循环结束后，还剩一个\0
	// *dest = *src;// '\0'
//第一次代码优化后：
//	while (*dest++ = *src++)
//	{
//		;
//	}	
//}
//第二次代码优化：
//	if (*dest != NULL && *src != NULL) //如果arr1或者arr2哪一方传错了数据，判断一下是否为空指针NULL
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
////第三次代码优化：使用断言assert（）
//	assert(dest != NULL);//使用断言得引用头文件#include <assert.h>
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//第四次代码优化：
char* my_strcpy(char* dest,const char* src) //加上const常变量
{
	char *ret = dest;
	assert(dest != NULL);//使用断言得引用头文件#include <assert.h>
	assert(src != NULL);
	//把src指向的字符串拷贝到dest指向的空间，包含\0字符
	while (*dest++ = *src++)
	//while (*src++ = *dest++)//即使写错代码一样编不过去
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "***********";
	char arr2[] = "happy";
	//my_strcpy(arr1,/*NULL*/arr2); //strcpy字符串拷贝（目的地，源头）
	printf("%s\n",my_strcpy(arr1,arr2));
	return 0;	
}
//关于const用法
int main()
{
	const int num = 0;//这里加上const我们可以理解为主观意愿上不想更改num的值
	//int* p = &num;
	//因此改为：
	//const int* p = &num; // const放在指针变量的*左边时，修饰的是*p，也就是说不能通过p来改变*p（num）的值
	int* const p = &num;   //const放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
						   //简单来说const放的位置决定了修饰关系
	*p = 20; //但定义指针后重新赋值为20，指针就打破了这个规则，我们需要限制指针
	printf("%d\n",num);
	return 0;
}

//strlen函数的模拟实现
char *my_strlen(const char* str) //const保证内容不会被改变
{
	int count = 0;
	assert(str!=NULL); //断言-保证指针的有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "everyday normal";
	int lenfun = my_strlen(arr);
	printf("%d\n",lenfun);
	return 0;
}
