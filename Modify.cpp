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
		printf("��������Ҫ�޸ĵ�ѧ�ţ�");
		scanf("%d",&nNumb);		
		while(p)
		{
			if(p->data.nNumb==nNumb)
			{
				printf("��������������ѧ�ɼ���");
				scanf("%s %f",p->data.sName,&p->data.fMath);
				puts("�޸ĳɹ���");
				Print();
				break;
			}
			p=p->pNext;
		}
		puts("�����Ƿ�����޸ģ���Y/N��");
		c=getch();
		putch(c);
		putch('\n');
	}while (c!='N' && c!='n');
}