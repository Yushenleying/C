#define _CRT_SECURE_NO_WARNINGS	1
#include <stdio.h>
//---------��֧��ѭ��-------------------
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
//	c = getchar(); //�Ӽ��̣��豸������һ���ַ�����ӡ
//	putchar(c);
//	putchar('\n');
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF) //һֱ���ռ���������ַ����������EOFҲ����ֹͣѭ��
//	{						 //EOF--end of file�ļ�������־
//		putchar(ch); //ֹͣѭ��Ctrl+Z��Ctrl+C��
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("�������룺>");
//	scanf("%s", password);
//	while((getchar())!= '\n');
//	{
//		;
//	}
//	printf("��ȷ������(YES/NO)��>");
//	ret = getchar();
//	if (ret == 'YES')
//	{
//		printf("��½�ɹ���\n");
//	}
//	else
//	{
//		printf("��½ʧ�ܣ�\n");
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
//------------ѭ�����-----------
//int main()
//{
//	//����ѭ�����ٴΣ�
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
//			//continue; // 0 1 2 3 4 ��ѭ��
//		printf("%d ", i);
//		i++;
//		}
//	while (i <= 10);
//	return 0;
//}

//int main()
//{
//	//����n�Ľ׳�
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
