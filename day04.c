#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib. h>//ststem
#include <string. h>//strcmp

//int main()
//{
//	//��Ŀ���ҳ�������ֻ����һ�ε���
//	//��һ�ֽⷨ��
//
//	int arr[] = { 1,2,3,4,5,1,2,3,4 }; //����Ԫ�ؿɱ䣬�㷨һ��
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		int count = 0; //count������
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
//			printf("����һ�ε���Ϊ��%d\n", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//�ڶ��ֽⷨ��ʹ�����^���⡣
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int  i = 0;
//	int ret = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^ arr[i];
//	}
//	printf("������Ϊ��%d\n",ret);
//	return 0;
//}

//int main()
//{
//	//���Ƶ��Թػ�������룺
//	char input[20] = { 0 }; //�������
//	system("shutdown -s -t 40"); //�ػ�
//	//system ר������ִ��ϵͳ�����
//again:
//	printf("��ע�⣡���ĵ��Խ���40���ػ������Ҫȡ���˲����������룺������\n");
//	scanf("%s", input); // %s ��ӡ�ַ���
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else {
//goto again; //���������󣬽���������again��
//	}
//	return 0;
//}



