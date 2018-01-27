// ListProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <process.h>
#include <malloc.h>

struct SNode *ghead=NULL;


void Print()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\t\t\t*****************************************");
	puts("\t\t\t**  ѧ��      ����\t     ��ѧ�ɼ� **");
	struct SNode *p=ghead;
	while(p)
	{
		if(p->data.nNumb !=-1)			
			printf("\t\t\t**  %d       %s\t         %0.1f **\n",p->data.nNumb,p->data.sName,p->data.fMath);
		p=p->pNext;
	}
	puts("\t\t\t*****************************************");
	system("pause");
}







int Menu()
{
	system("cls");
	puts("\n\n\n\n\n\n\n\t\t\t\t*********************");
	puts("\t\t\t\t** 1�����������Ϣ **");
	puts("\t\t\t\t** 2�������Ϣ     **");
	puts("\t\t\t\t** 3��ɾ����Ϣ     **");
	puts("\t\t\t\t** 4���޸���Ϣ     **");
	puts("\t\t\t\t** 5��������Ϣ     **");
	puts("\t\t\t\t** 0���˳�         **");
	puts("\t\t\t\t*********************");
	int i=0;
	printf("��ѡ�������");
	scanf("%d",&i);
	switch(i)
	{
	case 1:
		while (Browse())
			;
		break;
	case 2:
		InputMenu();
		break;
	case 3:
		Delete();
		break;
	case 4:
		Modify();
		break;
	case 5:
		while(Find())
			;
		break;
	}
	return i;

	
}


int main(int argc, char* argv[])
{
	float f=0.0f;
	Load();
	while(Menu())
		;
	Save();
	RemoveAll();
	return 0;
}
