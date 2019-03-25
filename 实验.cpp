// ConsoleApplication6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <malloc.h>

typedef struct A
{
	int n;
	int m;
	struct A *next;
}A,*Linklist;

int mima = 0;

Linklist inlist()
{
	Linklist head;
	if (head = (Linklist)malloc(sizeof(A)))
	{
		head->next = NULL;
	}
	return head;
}

Linklist creatlist(int a[], int n)
{
	int i = 0;
	Linklist head = inlist();
	Linklist x = head;
	for (i = 0; i < n; i++)
	{
		Linklist q = (Linklist)malloc(sizeof(A));
		q->n = i + 1;
		q->m = a[i];
		x->next = q;
		x = q;
		printf("序号为%d  密码为%d\n", q ->n, q ->m);
	}
	x->next = head->next;
	return head;
}

Linklist linkdelete(Linklist &m, int n)
{
	Linklist p, q;
	p = m;
	int i;
	for (i = 0; i < n - 1; i++)
	{
		p = p->next;
	}
	q = p->next;
	p->next = q->next;
	printf("%d号出列\n", q->n);
	mima = q->m;
	free(q);
	return p;
}

int start(Linklist &k, int n, int firstmima)
{
	Linklist q = k;
	int j = 1;
	while (n > 1)
	{
		if (j == 1)
		{
			q = linkdelete(q, firstmima);
			j = 0;
			n--;
		}
		else
		{
			q = linkdelete(q, mima);
			n--;
		}
	}
	return q->n;
}

#define N 30
void main()
{
	int a[N], n = 0, i = 0, firstmima;
	Linklist head;
	printf("请输入第一个密码值\n");
	scanf_s("%d", &firstmima);
	printf("请按顺序输入各游戏者密码,以0结尾");
	for (n = 0; n < N; n++)
	{
		scanf_s("%d",&a[n]);
		if (a[n]==0)
		{
			break;
		}
		else
		{
			i++;
		}
	}
	printf("总参加人数为%d，初始密码为%d", i, firstmima);
	head = creatlist(a, i);
	n = start(head, i, firstmima);
	printf("最后一位出列的是%d号", n);
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
