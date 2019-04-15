#include "pch.h"
#include <iostream>
#define MAX 100
int n;
typedef struct
{
	int  *base;
	int  *top;
	int  stacksize;
	int data[MAX];
	int m;
}SqStack;
void InitStack(SqStack &s)
{
	s.base = (int *)malloc(n * sizeof(int));
	if (!s.base) exit(0);
	s.top = s.base;
	s.stacksize = n;
	s.m = -1;
}
void Push(SqStack &s, int e)
{
	if (s.top - s.base >= n)
	{
		s.base = (int *)realloc(s.base, (s.stacksize + 1) * sizeof(int));
		if (!s.base) exit(0);
		s.top = s.base + s.stacksize;
		s.stacksize += 1;
	}
	*s.top++ = e;
	s.m ++;
	s.data[s.m] = e;
}
int Pop(SqStack &s)
{
	int e;
	e = s.m;
	if (s.top == s.base) exit(0);
	e = *--s.top;
	s.m--;
	return e;
}
int Emptys(SqStack &s)
{
	if (s.m==-1) return 1;
	else  return 0;
}
void process(int  k, int a[], int x, SqStack &s)
{
	int i, j;
	if (k < n)
	{
		Push(s, k + 1);
		process(k + 1, a, x, s);
		Pop(s);
	}
	if (!Emptys(s))
	{
		i = Pop(s);
		a[x] = i;
		x++;
		process(k, a, x, s);
		Push(s, i);
	}
	if (Emptys(s))
	{
		if (x == n)
		{
			for (j = 0; j < x; j++)
			{
				printf("%2d", a[j]);
			}
			printf("\n");
		}
	}
}
void main()
{
	SqStack s;
	int a[MAX];
	printf("输入要调度的车厢总数");
	scanf_s("%d", &n);
	InitStack(s);
	Push(s, 1);
	printf("输出序列为:\n");
	process(1, a, 0, s);
}