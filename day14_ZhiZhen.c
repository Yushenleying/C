#include <stdio.h>

//int main()
//{
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(double*));*/
//	int a = 0x11223344; //�պ��ĸ��ֽ� int�ܴ���
//	int* pa=&a;
//	*pa = 0;//��&a��ֵ��Ϊ00 00 00 00
//
//	char* pc = &a;
//	*pc = 0; //��&a��ֵ��Ϊ00 33 22 11
//	//�ܽ᣺ָ�����;�����ָ����н����õ�ʱ���ܹ����ʿռ�Ĵ�С
//	
//	//int* p; *p�ܹ�����4���ֽ�
//	//char* p;*p�ܹ�����1���ֽ�
//	//double* p;*p�ܹ�����8���ֽ�
//	//printf("%p\n",pa);
//	//printf("%p\n", pc);
//	return 0;
//}
//int main()
//{
//	//ָ��+-����
//	int a = 0x11223344;
//	int* pa=&a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//��ַ��ֵ��4
//	char* pc = &a;
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);//��ַ��ֵ��1
//	//ָ�����;����ˣ�ָ��ÿ��һ���߶�Զ
//	//int*p;p+1-->4
//	//char*p;p+1-->1
//	//double*p;p+1-->8
//	return 0;
//}
//int mian()
//{
//	//Ұָ��
//	int *p;//�ֲ�����δ��ʼ����Ĭ��Ϊ���ֵ
//	*p = 20;//�ֲ���ָ�����δ��ʼ����Ĭ��Ϊ���ֵ
//	return 0;
//}
//
//int main()
//{
//	//Ұָ��
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//p����arrֵ�ķ�Χ,����Խ����ʣ����Ұָ��
//	return 0;
//}
//ָ��ָ��Ŀռ��ͷ�
//int test()
//{//�������
//	int a = 10;//��Ϊ����inta�������Ǿֲ��������������������������
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;//�������a�����ٺ���������ռ�ֵռ�ã��ٴθ�ֵ20����
//	
//	return 0;
//}

//int main()
//{
//	//ָ��Ӽ�����
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
//	//ָ���ȥָ��
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n",& arr[9] - &arr[0]);// 9
//	//ָ���ȥָ��õ�����ָ��Ԫ�صĸ���
//	//ָ���ȥָ�����ָ��ͬһ��ռ䣨int int��
//	return 0;
//}

//int my_strlen(char * str)
//{
//	//strlenʹ��ָ���ָ�������������"bit"���ַ�������
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
//{//ָ���ϵ����
//	for (vp = &values[N_VALUES]; vp > &values[0];)
//	{
//		//ָ��Ƚϴ�С
//		*--vp = 0;
//	}
//	return 0;
//}

//int main()
//{
//	//������ָ��
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
//	//����ָ��
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;
//	**ppa = 20;//������¸�ֵ����ӡ���������¸���ֵ
//	printf("%d\n", **ppa);//����ppa��ŵ���pa��ֵ����pa��ŵ���a��ֵ�����Դ�ӡ**ppa������ֵ��a��ֵ
//	printf("%d\n", a);//20
//	//�Դ����������ļ�..ָ��
//	return 0;
//}

//int mian()
//{
//	//ָ��-����
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
	//������������
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

 int i;//ȫ�ֱ���i,δ��ʼ��Ĭ��ֵΪ0
int main()
{
	i--;
	if (i > sizeof(i)) //sizeof�������/������ռ�ռ�Ĵ�С >==0 �޷�����
	{
		printf(">\n");//������Ϊ����
	}
	else 
	{
		printf("<\n");
	}
	return 0;
}