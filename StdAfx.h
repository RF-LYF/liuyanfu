// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__FC6351AA_53F4_4856_9DE1_5CA9760F98C8__INCLUDED_)
#define AFX_STDAFX_H__FC6351AA_53F4_4856_9DE1_5CA9760F98C8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

struct SStud
{
	int nNumb;
	char sName[20];
	float fMath;
};

typedef struct SStud DATA;

struct SNode
{
	DATA data;
	SNode*pNext;
};

extern struct SNode *ghead;


int Find();
int Browse();
void Modify();
void InputMenu();
void Delete();
void Print();
void RemoveAll();
void AddHead(DATA);
void Load();
void Save();


// TODO: reference additional headers your program requires here

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__FC6351AA_53F4_4856_9DE1_5CA9760F98C8__INCLUDED_)


