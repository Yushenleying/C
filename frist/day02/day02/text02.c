#include <stdio.h>
/*
int main()
{
	//const���εĳ�����
	const int num = 4; //�����ԣ����ܸ���
	printf("%d\n",num);
	num = 8; // ����
	printf("%d\n",num);
	return 0;
}
*/
/*
int mian()
{
	const int n = 10; // n�Ǳ������������г����ԣ���������˵n�ǳ�������
	int arr[n] = { 0 }; //���ﱨ�������ڵ� n Ӧ���볣�����ʽ��
	return 0;
}
*/
/*
#define MAX 10 //define����ı�ʶ�� ���� 
int main()
{
	//define����ı�ʶ������
	int arr[MAX] = { 0 };
	printf("%d\n",MAX);
	return 0;
}
*/

enum Sex
{
	//һ һ�о�
	MALE,
	FEMALE,
	SECRET
};
//MALE FEMALE SECRET-ö�ٳ���
int main()
{
	printf("%d\n",MALE);	 //��ӡ�����ֵΪ0
	printf("%d\n", FEMALE);  //1
	printf("%d\n", SECRET);  //2
	return 0;
}

