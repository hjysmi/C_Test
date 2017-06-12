#include <stdio.h>
#include <stdlib.h>
#define MaxSize 20
typedef int datatype;
typedef struct list {
	datatype data[MaxSize];
	int last;
} seqlist;

/*��˳�����Ա���i��λ�����Ԫ��x*/
int insert_seqlist(seqlist *l, datatype x, int i)
{
	int j;
	if ((*l).last > MaxSize)
	{
		printf("���\n");
		return 0;
	}
	else if ((i<1) || (i>(*l).last + 1))
	{
		printf("λ������\n");
		return 0;
	}
	else
	{
		for (j = (*l).last - 1; j >= i - 1; j--)
			(*l).data[j + 1] = (*l).data[j];
		(*l).data[i - 1] = x;
		(*l).last = (*l).last + 1;
		return 1;
	}
}
/*��˳�����Ա���i��λ�����Ԫ��x*/

/*��˳�����Ա��в��Ҹ���ֵΪX�Ľڵ�*/
int search_seqlist(seqlist *l, datatype x)
{
	int j;
	for (j = 0; j<(*l).last - 1; j++)
	{
		if ((*l).data[j] == x)
			return j + 1;
	}
	return 0;
}
/*��˳�����Ա��в��Ҹ���ֵΪX�Ľڵ�*/

/*��˳�����Ա���i��λ��ɾ��Ԫ��x*/
int del_seqlist(seqlist *l, int i)
{
	int j;
	if (i>MaxSize)
	{
		printf("�������Ա�Χ��\n");
		return 0;
	}
	else if (i<1 || i>(*l).last)
	{
		printf("�ýڵ㲻���ڡ�\n");
		return 0;
	}
	else
	{
		for (j = i - 1; j<(*l).last; j++)
			(*l).data[j] = (*l).data[j + 1];
		(*l).last--;
		return 1;
	}
}
/*��˳�����Ա���i��λ��ɾ��Ԫ��x*/

/*���˳�����Ա��ȫ��ֵ*/
void prf_seqlist(seqlist *l)
{
	int j;
	for (j = 1; j <= (*l).last; j++)
	{
		printf("%d  ", (*l).data[j - 1]);
		if (j % 4 == 0)
			printf("\n");
	}
	printf("\n");
}
/*���˳�����Ա��ȫ��ֵ*/