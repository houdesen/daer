#include <stdio.h>
#include "DynaLnkList.h"

/* �����*/
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
	printf("���β���Ԫ�غ�����L����Ϊ��%d\n",ListLength(L));
	printf("���β���Ԫ�غ�����LΪ��\n");
	ListTraverse(L,visit);
	printf("������ɾ�������ڼ�����㣺\n");
	scanf("%d",&a);
	Inverse(L);
	printf("ɾ�����LΪ��\n");
	ListDelete(L,a,&e);
	Inverse(L);
	ListTraverse(L,visit);
	return 0;
}
