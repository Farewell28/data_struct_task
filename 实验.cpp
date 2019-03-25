
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
	int a[N], m, n = 0, i = 0, firstmima;
	Linklist head;
	printf("请输入报数上限\n");
	scanf_s("%d", &m);
	printf("请输入第一个密码值(不超过%d\n",m);
	scanf_s("%d", &firstmima);
	printf("请按顺序输入各游戏者密码(不超过%d,以0结尾",m);
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
