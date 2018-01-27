#include "stdafx.h"
#include <stdio.h>
#include <process.h>
#include <conio.h>


void Modify()
{
	int nNumb=0;
	char c=0;
	do
	{
		system("cls");
		Print();
		struct SNode *p=ghead;
		printf("请输入您要修改的学号：");
		scanf("%d",&nNumb);		
		while(p)
		{
			if(p->data.nNumb==nNumb)
			{
				printf("请输入姓名、数学成绩：");
				scanf("%s %f",p->data.sName,&p->data.fMath);
				puts("修改成功！");
				Print();
				break;
			}
			p=p->pNext;
		}
		puts("请问是否继续修改：【Y/N】");
		c=getch();
		putch(c);
		putch('\n');
	}while (c!='N' && c!='n');
}