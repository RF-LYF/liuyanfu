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
			puts("��ѧ���Ѿ����ڣ�����������:");
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
		printf("������ѧ�š���������ѧ�ɼ���");
		scanf("%d %s %f",&d.nNumb,d.sName,&d.fMath);
		d=CheckInput(d);
		if(Sel==1)
			AddHead(d);
		else
			AddTail(d);
		system("cls");
		puts("�����Ƿ������ӣ���Y/N��");
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
	puts("\t\t\t\t**\t1.ѡ��ͷ�巨\t  **");
	puts("\t\t\t\t**\t2.ѡ��β�巨\t  **");
	puts("\t\t\t\t**\t0.�������˵�\t  **");
	puts("\t\t\t\t****************************");
	printf("��ѡ��������ݵķ�ʽ��");
	scanf("%d",&i);
	if(i==1 || i==2)
		Input(i);
}
