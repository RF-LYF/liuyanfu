#include "stdafx.h"
#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <process.h>





void RemoveAll()
{
	struct SNode *p,*p1;
	p=ghead;
	while(p)
	{
		p1=p;
		p=p->pNext;
		free(p1);
	}
}
int Remove()
{
	struct SNode *p,*p1;
	p=ghead;
	int nNumb=0;
	system("cls");
	Print();
	puts("������Ҫɾ����ѧ�ţ�");
	scanf("%d",&nNumb);
	if(p->data.nNumb==nNumb)
	{
		ghead=p->pNext;
		free(p);
		return 1;
	}
	while(p)
	{
		if(p->data.nNumb==nNumb)
		{
			p1->pNext=p->pNext;
			free(p);
			return 1;
		}
		p1=p;
		p=p->pNext;
	}
	return -1;

}
void Delete()
{
	char c=0;
	int nRet=0;
	do
	{
		if(nRet=Remove()==1)
		{
			puts("ɾ���ɹ���");
			Print();
		}
		else
			puts("ɾ��ʧ�ܣ��������ѧ�Ų����ڣ�");

		puts("�����Ƿ����ɾ������Y/N��");
		c=getch();
		putch(c);
		putch('\n');

	}while(c!='N'&& c!='n');
}