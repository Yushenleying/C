#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	//ʹ��debug���н��Ϊ��ѭ��
//	//ʹ��release���Ϊ��ӡ12��hehe
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
//	//ʹ��debug���н��Ϊ��ѭ��
//	//ʹ��release���Ϊ��ӡ12��hehe
//	//��ʹ�õ��Ե�ʱ�򣬻ᷢ����ѭ����ԭ���ǵ�ѭ����arr[12]��ʱ��
//	//i��ֵҲ����arr[12]�仯����Ϊarr[12]��i�ĵ�ַһ��
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

//ģ��ʵ�ֿ⺯����strcpy
//my_strcpy(char* dest, char* src) //�˴���*dest����arr1
//{
	//while (*src != '\0') //��*src������\0����˼�ǰ�happy����arr2 Ҳ����*dest��
	//{
	//	*dest = *src;
	//	*src++;
	//	*dest++;
	//}//ѭ�������󣬻�ʣһ��\0
	// *dest = *src;// '\0'
//��һ�δ����Ż���
//	while (*dest++ = *src++)
//	{
//		;
//	}	
//}
//�ڶ��δ����Ż���
//	if (*dest != NULL && *src != NULL) //���arr1����arr2��һ�����������ݣ��ж�һ���Ƿ�Ϊ��ָ��NULL
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
////�����δ����Ż���ʹ�ö���assert����
//	assert(dest != NULL);//ʹ�ö��Ե�����ͷ�ļ�#include <assert.h>
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//���Ĵδ����Ż���
char* my_strcpy(char* dest,const char* src) //����const������
{
	char *ret = dest;
	assert(dest != NULL);//ʹ�ö��Ե�����ͷ�ļ�#include <assert.h>
	assert(src != NULL);
	//��srcָ����ַ���������destָ��Ŀռ䣬����\0�ַ�
	while (*dest++ = *src++)
	//while (*src++ = *dest++)//��ʹд�����һ���಻��ȥ
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "***********";
	char arr2[] = "happy";
	//my_strcpy(arr1,/*NULL*/arr2); //strcpy�ַ���������Ŀ�ĵأ�Դͷ��
	printf("%s\n",my_strcpy(arr1,arr2));
	return 0;	
}
//����const�÷�
int main()
{
	const int num = 0;//�������const���ǿ������Ϊ������Ը�ϲ������num��ֵ
	//int* p = &num;
	//��˸�Ϊ��
	//const int* p = &num; // const����ָ�������*���ʱ�����ε���*p��Ҳ����˵����ͨ��p���ı�*p��num����ֵ
	int* const p = &num;   //const����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
						   //����˵const�ŵ�λ�þ��������ι�ϵ
	*p = 20; //������ָ������¸�ֵΪ20��ָ��ʹ������������������Ҫ����ָ��
	printf("%d\n",num);
	return 0;
}

//strlen������ģ��ʵ��
char *my_strlen(const char* str) //const��֤���ݲ��ᱻ�ı�
{
	int count = 0;
	assert(str!=NULL); //����-��ָ֤�����Ч��
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
