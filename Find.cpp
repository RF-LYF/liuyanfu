#include "stdafx.h"
#include <stdio.h>
#include <process.h>
#include <conio.h>
#include <string.h>

void FindbyNumb()
{
	int nNumb=0;
	char c=0;
	struct SNode *p;
	do
	{
		system("cls");
		int Flag=0;
		p=ghead;
		printf("��������ҵ�ѧ�ţ�");
		scanf("%d",&nNumb);
		while(p)
		{
			if(p->data.nNumb==nNumb)
			{
				Flag=1;
				puts("\n\n\n\n\n\n\n\t\t\t*****************************************");
				puts("\t\t\t**  ѧ��      ����\t     ��ѧ�ɼ� **");
				printf("\t\t\t**  %d       %s\t         %0.1f **\n",p->data.nNumb,p->data.sName,p->data.fMath);
				break;
			}
			p=p->pNext;
		}
		if(!Flag)
			puts("�����ҵ�ѧ�Ų����ڣ������Ƿ�������ң���Y/N��");
		else
			puts("�����Ƿ�������ң���Y/N��");
		c=getch();
		putch(c);
		putch('\n');

	}while(c!='N' && c!='n');


}
void FindbyName()
{
	char SName[20]={0};
	struct SNode *p;
	char c=0;
	do
	{   system("cls");
	    int Flag=0;
		p=ghead;
		printf("��������ҵ�������");
		scanf("%s",SName);
		puts("\n\n\n\n\n\n\n\t\t\t*****************************************");
		puts("\t\t\t**  ѧ��      ����\t     ��ѧ�ɼ� **");
		while(p)
		{
			if(strcmp(p->data.sName,SName)==0)
			{
				Flag=1;				
				printf("\t\t\t**  %d       %s\t         %0.1f **\n",p->data.nNumb,p->data.sName,p->data.fMath);
				
			}
			p=p->pNext;
		}
		if(!Flag)
		{  
			system("cls");
			puts("�����ҵ�ѧ�Ų����ڣ������Ƿ�������ң���Y/N��");
		}
		else
			puts("�����Ƿ�������ң���Y/N��");
		c=getch();
		putch(c);
		putch('\n');
		
	}while(c!='N' && c!='n');

}
void FindbyMath()
{

	float FMax=0.0,FMin=0.0;
	char c=0;
	struct SNode *p;
	do
	{   
		system("cls");
		int Flag=0;
		p=ghead;
		printf("��������ҵķ����Σ�");
		scanf("%f %f",&FMin,&FMax);
		puts("\n\n\n\n\n\n\n\t\t\t*****************************************");
		puts("\t\t\t**  ѧ��      ����\t     ��ѧ�ɼ� **");
		while(p)
		{
			if(p->data.fMath>=FMin && p->data.fMath<=FMax)
			{
				
				Flag=1;
				printf("\t\t\t**  %d       %s\t         %0.1f **\n",p->data.nNumb,p->data.sName,p->data.fMath);
				
			}
			p=p->pNext;
		}
		if(!Flag)
		{   
			system("cls");
			puts("�����ҵ�ѧ�Ų����ڣ������Ƿ�������ң���Y/N��");
		}
		else
			puts("�����Ƿ�������ң���Y/N��");
		c=getch();
		putch(c);
		putch('\n');
		
	}while(c!='N' && c!='n');
}

int Find()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\t\t\t\t****************************");
	puts("\t\t\t\t**\t1.��ѧ�Ų���\t  **");
	puts("\t\t\t\t**\t2.����������\t  **");
	puts("\t\t\t\t**\t3.����ѧ�ɼ�\t  **");
	puts("\t\t\t\t**\t0.�������˵�\t  **");
	puts("\t\t\t\t****************************");
	int i=0;
	printf("��ѡ����Ҫ���еĲ�����");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		FindbyNumb();
		break;
	case 2:
		FindbyName();
		break;
	case 3:
		FindbyMath();
		break;
	}
	return i;
}
