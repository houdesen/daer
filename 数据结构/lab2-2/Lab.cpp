#include <stdio.h>
#include "DynaLnkList.h"

/* 代码段*/
int main(void)
{
	// TODO: Place your test code here
	int k=1,a,e;
	ElemType arr[9]={11,-22,33,-3,-88,21,77,0,-9};
	LinkList L;
	InitList(&L);
	for(k;k<=9;k++)
	{
		ListInsert(L,k,arr[k-1]);
	}
	printf("依次插入元素后链表L长度为：%d\n",ListLength(L));
	printf("依次插入元素后链表L为：\n");
	ListTraverse(L,visit);
	printf("请输入删除倒数第几个结点：\n");
	scanf("%d",&a);
	Inverse(L);
	printf("删除后的L为：\n");
	ListDelete(L,a,&e);
	Inverse(L);
	ListTraverse(L,visit);
	return 0;
}
