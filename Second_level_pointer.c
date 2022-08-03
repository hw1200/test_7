#define _CRT_SECURE_NO_WAR
#include <stdio.h>
#include <stdlib.h>

void sl_pointer()
{
	int i = 10;
	int* p = &i;
	int** p1 = &p;
	printf("**p1 = %d\n", **p1);
}

void change(int* pi, int** pj)//pi = pi,pj = &pj
{
	*pj = pi;
}
void use_change()
{
	int i = 10;
	int j = 5;
	int* pi = &i;
	int* pj = &j;
	printf("i = %d,j = %d,*pi = %d,*pj = %d\n", i, j, *pi, *pj);
	change(pi, &pj);
	printf("i = %d,j = %d,*pi = %d,*pj = %d\n", i, j, *pi, *pj);
}

void print(char**p)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", p[i]);
	}
}
void print_twoarr(char (*p)[10])
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s\n", p[i]);
	}
}
void sl_pointer_trans()
{
	char** p;
	char b[5][10] = { "leel","bado","adaca","cqwici","dbiqc" };
	int i,j;
	char* ptemp;
	p = (char**)malloc(sizeof(char*) * 5);
	for (i = 0; i < 5; i++)
	{
		p[i] = b[i];
	}
	printf("排序之前:\n");
	print(p);
	for (i = 5; i > 1; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (strcmp(p[j],p[j + 1])>0)
			{
				ptemp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = ptemp;
				
			}
			
		}
	}
	printf("排序之后:\n");
	print(p);
	printf("输出b的值:\n");
	printf("---------------\n");
	print_twoarr(b);
}

void bubbling()
{
	//冒泡排序
	int a[5] = { 3,7,9,2,4 };
	int i, j, temp;
	for (i = 5; i > 1; i--)
	{
		for (j = 0; j < i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;

			}

		}
	}
	printf("a[5]={");
	for (i = 0; i < 5; i++)
	{
		printf("%d,", a[i]);
	}
	printf("}");
	
}

void b()
{
	printf("I am a func\n", b);
}
void a(void (*p)())
{
	p();
}
void func_pointer()
{
	void (*p)();
	p = b;
	a(p);
}

int main()
{
	//sl_pointer();

	//use_change();

	//sl_pointer_trans();

	//bubbling();

	func_pointer();


	system("pause");
}