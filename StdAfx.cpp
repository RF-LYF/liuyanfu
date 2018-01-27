// stdafx.cpp : source file that includes just the standard includes
//	ListProject.pch will be the pre-compiled header
//	stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
#include <stdio.h>

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


void Load()
{
	FILE *fp=fopen("./data.liu","rb");
	DATA data;
	while(fread(&data,1,sizeof(data),fp))//从文件-内存，直到读不到文件内容为止
		AddHead(data);
	fclose(fp);

}


void Save()
{

	FILE *fp=fopen("./data.liu","wb");
	struct SNode *p=ghead;
	while(p)
	{
		fwrite(p,1,sizeof(DATA),fp);
		p=p->pNext;
	}
	fclose(fp);

}