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
		printf("请输入查找的学号：");
		scanf("%d",&nNumb);
		while(p)
		{
			if(p->data.nNumb==nNumb)
			{
				Flag=1;
				puts("\n\n\n\n\n\n\n\t\t\t*****************************************");
				puts("\t\t\t**  学号      姓名\t     数学成绩 **");
				printf("\t\t\t**  %d       %s\t         %0.1f **\n",p->data.nNumb,p->data.sName,p->data.fMath);
				break;
			}
			p=p->pNext;
		}
		if(!Flag)
			puts("您查找的学号不存在，请问是否继续查找：【Y/N】");
		else
			puts("请问是否继续查找：【Y/N】");
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
		printf("请输入查找的姓名：");
		scanf("%s",SName);
		puts("\n\n\n\n\n\n\n\t\t\t*****************************************");
		puts("\t\t\t**  学号      姓名\t     数学成绩 **");
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
			puts("您查找的学号不存在，请问是否继续查找：【Y/N】");
		}
		else
			puts("请问是否继续查找：【Y/N】");
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
		printf("请输入查找的分数段：");
		scanf("%f %f",&FMin,&FMax);
		puts("\n\n\n\n\n\n\n\t\t\t*****************************************");
		puts("\t\t\t**  学号      姓名\t     数学成绩 **");
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
			puts("您查找的学号不存在，请问是否继续查找：【Y/N】");
		}
		else
			puts("请问是否继续查找：【Y/N】");
		c=getch();
		putch(c);
		putch('\n');
		
	}while(c!='N' && c!='n');
}

int Find()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\n\t\t\t\t****************************");
	puts("\t\t\t\t**\t1.按学号查找\t  **");
	puts("\t\t\t\t**\t2.按姓名查找\t  **");
	puts("\t\t\t\t**\t3.按数学成绩\t  **");
	puts("\t\t\t\t**\t0.返回主菜单\t  **");
	puts("\t\t\t\t****************************");
	int i=0;
	printf("请选择您要进行的操作：");
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
