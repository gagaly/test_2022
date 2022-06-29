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
//enum sex    ，，，，，
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
//	//如果不已\0结尾,会变成随机数
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	//求字符串长度
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
//	//转义字符\\
//	printf("c\\test\\test");
//	printf("ab\c\d");
//	return 0;
//}
//转义字符8进制
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
//转移字符8进制
//int main()
//{
//	/*printf("%c\n", '\x30');*/
// 八进制中没有8，所以这个字符8不能算转义字符里面
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
//下面市条件语句；
//int main()
//{
//	int input = 0;
//	printf("你要好好学习吗\n");
//	printf("那你要好好学习吗？1/0\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer");
//
//	}
//	else
//	{
//		printf("那你只能卖红薯了");
//	}
//	return 0;
//
//}
//循环判断语句
//int main()
//{
//	int line = 0;
//	while (line<=30000)
//	{
//		printf("写代码努力工作%d\n", line);
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
//		printf("好offer\n");
//	}
//
//	return 0;
//}
//函数的初步理解
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
//数组的使用
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
//循环数组遍历
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
//位移
//int main()
//{
//	int a = 2;
//	int b =a >> 1;
//	printf("%d", b);
//	return 0;
//}
//计算数组大小
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
//先加加  在使用  a++先使用后++
int main()
{
	int a = 10;
	int b = ++a;
	printf("%d\n", a);
	printf("%d\n", b);
	return 0;
}