#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 1000

#include<stdio.h>	
#include<Windows.h>
#include<string.h>
#include "feen.h"
//int main()
//
//{
//	
//	extern fine;
//	const int a = 100;
//	int add = MAX;
//	//scanf("%d", &add);
//	printf("%d\n", add);
//	printf("%d\n", a);
//	printf("%d\n", fine);
//	system("pause");
//	return 0;
//	
//
//}
//enum sex    ����������
//{
//	men=2,
//	wumen,
//	huwumen
//};
//int main()
//{
//	enum sex s = men;
//	printf("%d\n", men);
//	printf("%d\n", wumen);
//	printf("%d\n", huwumen);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%s", arr);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	//�������\0��β,���������
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//���ַ�������
//	//int len=strlen("abc");
//	//printf("%d\n", len);
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//
//	return 0;
//
//}
//int main()
//{
//	//ת���ַ�\\
//	printf("c\\test\\test");
//	printf("ab\c\d");
//	return 0;
//}
//ת���ַ�8����
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100;i++)
//	{
//		char arr1[] = "fkjsdalfkjasd";
//		int sum = strlen(arr1);
//		printf("%d\n", sum);
//		printf("%c\n", '\131');
//	}
//	return 0;
//}
//ת���ַ�8����
//int main()
//{
//	/*printf("%c\n", '\x30');*/
// �˽�����û��8����������ַ�8������ת���ַ�����
//	printf("%d\n", strlen("c:\test\328\test.c"));
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 3; i <= 0; i--)
//	{
//		printf(" ");
//	}
//	return 0;
//}
////   **   
////  ****
//// ******
////  ****
////   **
//������������䣻
//int main()
//{
//	int input = 0;
//	printf("��Ҫ�ú�ѧϰ��\n");
//	printf("����Ҫ�ú�ѧϰ��1/0\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer");
//
//	}
//	else
//	{
//		printf("����ֻ����������");
//	}
//	return 0;
//
//}
//ѭ���ж����
//int main()
//{
//	int line = 0;
//	while (line<=30000)
//	{
//		printf("д����Ŭ������%d\n", line);
//
//		if (line == 10000)
//		{
//			system("pause");
//		}
//		if (line == 20000).
//		{
//			system("pause");
//		}
//		line++;
//	}
//	if (line==30000)
//	{
//		printf("��offer\n");
//	}
//
//	return 0;
//}
//�����ĳ������
//Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int sum=Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//�����ʹ��
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char ch[5] = { 'a','b','c' };
//	for (int i = 0; i <= 9; i++)
//	{
//		printf("%d\n", arr1[i]);
//	}
//	for (int i = 0; i <= 4; i++)
//	{
//		printf("%c\n", ch[i]);
//	}
//	return 0;
//}
//ѭ���������
//int main()
//{
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int* ar1 = arr1;
//	int x = 0;
//	while (x<10	)
//	{
//		printf("%d ", arr1[x]);
//		x++;
//	}
//	
//	return 0;
//}
//λ��
//int main()
//{
//	int a = 2;
//	int b =a >> 1;
//	printf("%d", b);
//	return 0;
//}
//���������С
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d", sz);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int x = 5;
//	int y = 8;
//	int z = Add(x, y);
//	printf("%d\n", z);
//	printf("%d", ~a);
//	return 0;
//}
//�ȼӼ�  ��ʹ��  a++��ʹ�ú�++
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}