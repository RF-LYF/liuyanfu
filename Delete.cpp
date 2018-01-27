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
	puts("请输入要删除的学号：");
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
			puts("删除成功！");
			Print();
		}
		else
			puts("删除失败，您输入的学号不存在！");

		puts("请问是否继续删除：【Y/N】");
		c=getch();
		putch(c);
		putch('\n');

	}while(c!='N'&& c!='n');
}