#define _CRT_SECURE_NO_WARNINGS 1.
#include <stdio.h>
#include <string.h>
//int main()
//{
//	//register int a = 10; ���齫a����Ϊ�Ĵ�������register
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int���з��ŵ�
//	//unsigned int num = 0 ; �޷��ŵ�
//	return 0;
//}
//int main()
//{
//	typedef unsigned int U_int; //typedef--���Ͷ��壬�������ض���
//	unsigned int num1 = 10;
//	U_int num2 = 20;
//	return 0;
//}
//
//	void test()
//{
//		//static ���εľֲ������������ڱ䳤
//	static int a = 1;//static ��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a); //�����Ϊ a = 22222,�������static������Ϊ23456��
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
//	//static ���ξֲ��������ı���Ǿֲ������������ڱ䳤
//	//static ����ȫ�ֱ������ı����ȫ�ֱ����������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//	//extern--�����ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//	return 0;
//}

//int main()
//{
//	//extern--Ҳ�������ⲿ����
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n",sum);
//	return 0;
//}

////��Ķ���
//#define MAX(X, y)(X>Y?X: Y)
////#define MAX 100 //define--����ı�ʶ������
//				//define--���Զ����--������
//int main()
//{
//	//int a= MAX
//	int a = 10;
//	int b = 20;
//		//�����ķ�ʽ
//		int max = Max(a, b);
//		printf("max = %d\n", max);
//	//��ķ�ʽ
//		max = Max(a, b);
//		//max=(a>b?a: b)
//		printf("max = % d\n", max);
//		return 0;
//}
//------------ָ��
//int main()
//{
//	int a = 10; //4���ֽ�
//	int* p = &a; //ȡ��ַ
//	*p = 20; // * -�����ò��������ı���Ϊ20��
//	printf("a = %d\n",a);
//	//��һ�ֱ�����������ŵ�ַ��--ָ�����
//	printf("%p\n",&a);
//	return 0;
//	//ע�⣺ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽڡ�
//}
//int main()
//{
//	char ch = 'w'; //
//	char* pc = &ch; //& ��ch������ŵĵ�ַ�����pc�ȡ��ַ��
//	printf("%d\n", sizeof(pc));
//	*pc = 'a'; //  �����ò���������pc��ĵ�ַ��ֵ�滻Ϊ�ַ���a��
//	printf("%c\n", ch);
//	return 0;
//}

//-----�ṹ��
struct Book
{
	char name[50];
	short price;
};
int main()
{
	struct Book b1 = { "C���Գ������",55 };
	strcpy(b1.name, "C++"); //strcpy -�ַ�������-�⺯�� string.h
	printf("%s\n", b1.name);
	b1.price = 15; //���ļ۸�
	struct Book* pb = &b1;//ȡb1�ĵ�ַ�����pb��
	//.   �ṹ���������Ա
	//->  �ṹ��ָ�룬��Ա  
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//���������ִ�ӡ�������У�
	printf("%s\n", pb->name);
	printf("%d\n", pb->price);
	//printf("������%s\n",b1.name);
	//printf("�۸�%d\n", b1.price);
	return 0;
}