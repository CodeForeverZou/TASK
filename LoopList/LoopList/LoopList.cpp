// LoopList.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "stdlib.h"
#include "string.h"

typedef struct Crod_Node {
	struct Crod_Node *left;
	struct Crod_Node *right;
	char data;
}*Crod;

int Creat(Crod &L) {
	printf("输入字符串");
	Crod p, q;
	p=L =(Crod ) malloc(sizeof(Crod_Node));
	scanf("%c%*c", &L->data);
	L->left = NULL;
	L->right = NULL;
	
	int n = 0;
	while (n<5)
	{
		n++;
		Crod q = (Crod )malloc(sizeof(Crod_Node));
		scanf("%c%*c", &q->data);
		q->left = p;
		p->right = q;
		p = q;			//少了这一句！！！
	}
	L->left = p;
	p->right = L;


	return 1;
}

int Travse(Crod L) {
	Crod p = L, q = L;
	do
	{
		printf("%c", p->data);
		p = p->right;
	} while (p!=q);
	return 1;
}

int main()
{
	Crod L;
	Creat(L);
	Travse(L);
	system("pause");
    return 0;
}

