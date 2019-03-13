// ConsoleApplication2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#define N 20

//
//int main()
//{
//	int X, Y, Z;
//
//	scanf_s("%d,%d,%d", &X, &Y, &Z);
//	if (X >= Y)
//	{
//		if (X >= Z)
//		{
//			if (Y >= Z)
//			{
//				printf("%d,%d,%d", X, Y, Z);
//			}
//			else
//			{
//				printf("%d,%d,%d", X, Z, Y);
//			}
//		}
//		else
//		{
//			printf("%d,%d,%d", Z,X,Y);
//		}
//	}
//	else
//	{
//		if (Y >= Z)
//		{
//			if (X >= Z)
//			{
//				printf("%d,%d,%d", Y, X, Z);
//			}
//			else
//			{
//				printf("%d,%d,%d", Y, Z, X);
//			}
//		}
//		else
//		{
//			printf("%d,%d,%d", Z, Y, X);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int x,n,i,P;
//	int a[N];
//	printf("输入变量的值");
//	scanf("%d", &x);
//	printf("输入多项式系数");
//	scanf("%d", &n);
//	printf("依次输入多项式系数");//以上语句执行次数均为一次
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);//执行次数为n次
//	}
//	P = a[n - 1];
//	for (i = n; i > 0; i--)
//	{
//		P = a[i - 1] + x * P;//
//	}
// printf（"%d", P）;
// return 0;
//}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
