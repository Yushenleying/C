#include <stdio.h>

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0x11223344; //刚好四个字节 int能存下
//	int* pa=&a;
//	*pa = 0;//将&a的值改为00 00 00 00
//
//	char* pc = &a;
//	*pc = 0; //将&a的值改为00 33 22 11
//	//总结：指针类型决定了指针进行解引用的时候，能够访问空间的大小
//	
//	//int* p; *p能够访问4个字节
//	//char* p;*p能够访问1个字节
//	//double* p;*p能够访问8个字节
//	//printf("%p\n",pa);
//	//printf("%p\n", pc);
//	return 0;
//}
//int main()
//{
//	//指针+-整数
//	int a = 0x11223344;
//	int* pa=&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//地址的值加4
//	char* pc = &a;
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//地址的值加1
//	//指针类型决定了：指针每走一步走多远
//	//int*p;p+1-->4
//	//char*p;p+1-->1
//	//double*p;p+1-->8
//	return 0;
//}
//int mian()
//{
//	//野指针
//	int *p;//局部变量未初始化，默认为随机值
//	*p = 20;//局部的指针变量未初始化，默认为随机值
//	return 0;
//}
//
//int main()
//{
//	//野指针
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//p超出arr值的范围,属于越界访问，变成野指针
//	return 0;
//}
//指针指向的空间释放
//int test()
//{//错误代码
//	int a = 10;//因为这里inta创建的是局部变量，出了这个函数就销毁了
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//当上面的a被销毁后会变成其他空间值占用，再次赋值20错误。
//	
//	return 0;
//}

//int main()
//{
//	//指针加减整数
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n",*p);
//	//	p = p + 1;
//	//	/*p++;*/
//	//}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);
//		p += 2;
//	}	
//	return 0;
//}
//
//int main()
//{
//	//指针减去指针
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",& arr[9] - &arr[0]);// 9
//	//指针减去指针得到的是指针元素的个数
//	//指针减去指针必须指向同一块空间（int int）
//	return 0;
//}

//int my_strlen(char * str)
//{
//	//strlen使用指针减指针的特性来计算"bit"的字符串长度
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}

//int mian()
//{//指针关系运算
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		//指针比较大小
//		*--vp = 0;
//	}
//	return 0;
//}

//int main()
//{
//	//数组与指针
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p====%p\n", p + i, &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}

//int main()
//{
//	//二级指针
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;
//	**ppa = 20;//如果重新赋值，打印出来就是新赋的值
//	printf("%d\n", **ppa);//这里ppa存放的是pa的值，而pa存放的是a的值，所以打印**ppa出来的值是a的值
//	printf("%d\n", a);//20
//	//以此类推三级四级..指针
//	return 0;
//}

//int mian()
//{
//	//指针-数组
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a,&b,&c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ",*(arr[i]));
//	}
//	return 0;
//}
//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int arr[], int sz)
//{
//	int right = 0;
//	int left = sz - 1;
//	while (left<right)
//	{
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	left++;
//	right--;
//	}	
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Init(arr, sz);
//	Print(arr, sz);
//	Reverse(arr,sz);
//	Print	(arr, sz);
//	return 0;
//}

int main()
{
	//交换两个数组
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,0 };
	int tmp = 0;
	int i = 0;
	int sz = sizeof(arr1) / sizeof(arr1[0]);

	for (i = 0; i < sz; i++)
	{
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	printf("%d,%d\n", arr1[i],arr2[i]);//
}

 int i;//全局变量i,未初始化默认值为0
int main()
{
	i--;
	if (i > sizeof(i)) //sizeof计算变量/类型所占空间的大小 >==0 无符号数
	{
		printf(">\n");//输出结果为大于
	}
	else 
	{
		printf("<\n");
	}
	return 0;
}