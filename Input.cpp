#include "stdafx.h"
#include <stdio.h>
#include <malloc.h>
#include <conio.h>
#include <process.h>

DATA CheckInput(DATA d)
{
	struct SNode *p=ghead;
	while(p)
	{
		if(p->data.nNumb==d.nNumb)
		{
			puts("该学号已经存在，请重新输入:");
			scanf("%d %s %f",&d.nNumb,d.sName,&d.fMath);
			p=ghead;
			continue;
		}
		p=p->pNext;
	}
	return d;
}

void AddHead(DATA d)
{ 
	struct SNode *p=(struct SNode *)malloc(sizeof(struct SNode));
	p->data=d;
	p->pNext=ghead;
	ghead=p;
}


void AddTail(DATA d)
{
	struct SNode *pNew=(struct SNode *)malloc(sizeof(struct SNode));
	struct SNode *p=ghead;
	pNew->data=d;
	pNew->pNext=NULL;
	if(!p)
	{
		ghead=pNew;
		return;
	}
	while(p->pNext)
		p=p->pNext;
	p->pNext=pNew;
	
}

void Input(int Sel)

{   
	char c=0;
	
	do
	{
		DATA d;
		printf("请输入学号、姓名、数学成绩：");
		scanf("%d %s %f",&d.nNumb,d.sName,&d.fMath);
		d=CheckInput(d);
		if(Sel==1)
			AddHead(d);
		else
			AddTail(d);
		system("cls");
		puts("请问是否继续添加：【Y/N】");
		c=getch();
		putch(c);
		putch('\n');
	}while(c!='N' && c!='n');

}

void InputMenu()
{
	system("cls");
	int i=0;
	puts("\n\n\n\n\n\n\n\n\t\t\t\t****************************");
	puts("\t\t\t\t**\t1.选择头插法\t  **");
	puts("\t\t\t\t**\t2.选择尾插法\t  **");
	puts("\t\t\t\t**\t0.返回主菜单\t  **");
	puts("\t\t\t\t****************************");
	printf("请选择插入数据的方式：");
	scanf("%d",&i);
	if(i==1 || i==2)
		Input(i);
}
