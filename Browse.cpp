#include "stdafx.h"
#include <stdio.h>
#include <process.h>
#include <string.h>


void SortbyNumb()
{

	struct SNode *p,*p1,*pMin;
	p=ghead;
	if(!p)
		return;
	if(!p->pNext)
		return;
	while(p->pNext)
	{
		pMin=p;
		p1=p->pNext;
		while(p1)
		{
			if(p1->data.nNumb<pMin->data.nNumb)
				pMin=p1;
			p1=p1->pNext;

		}
		if(pMin!=p)
		{
			DATA t=pMin->data;
			pMin->data=p->data;
			p->data=t;
		}
		p=p->pNext;
	}
	Print();

}
void SortbyName()
{

	struct SNode *p,*p1,*pMin;
	p=ghead;
	if(!p)
		return;
	if(!p->pNext)
		return;
	while(p->pNext)
	{
		pMin=p;
		p1=p->pNext;
		while(p1)
		{
			if(strcmp(p1->data.sName,pMin->data.sName)<0)
				pMin=p1;
			p1=p1->pNext;
		}
		if(pMin!=p)
		{
			DATA t=pMin->data;
			pMin->data=p->data;
			p->data=t;
		}
		p=p->pNext;
	}
	Print();

}

void SortbyMath()
{
	struct SNode *p,*p1,*pMin;
	p=ghead;
	if(!p)
		return;
	if(!p->pNext)
		return;
	while(p->pNext)
	{
		pMin=p;
		p1=p->pNext;
		while(p1)
		{
			if(p1->data.fMath<pMin->data.fMath)
				pMin=p1;
			p1=p1->pNext;

		}
		if(pMin!=p)
		{
			DATA t=pMin->data;
			pMin->data=p->data;
			p->data=t;
		}
		p=p->pNext;
	}
	
	Print();
}
int Browse()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\t\t\t\t***************************");
	puts("\t\t\t\t**\t1.按学号排序\t  **");
	puts("\t\t\t\t**\t2.按姓名排序\t  **");
	puts("\t\t\t\t**\t3.按数学成绩\t  **");
	puts("\t\t\t\t**\t0.返回主菜单\t  **");
	puts("\t\t\t\t***************************");
	int i=0;
	puts("请选择您要进行的操作：");
	scanf("%d",&i);
	switch (i)
	{
	case 1:
		SortbyNumb();
		break;
	case 2:
		SortbyName();
		break;
	case 3:
		SortbyMath();
		break;
	}
	return i;


}
