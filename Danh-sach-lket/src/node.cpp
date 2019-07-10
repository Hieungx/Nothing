#include <iostream>
#include <stdio.h>
using namespace std;
//1.Khai bao cau truc du lieu
struct Node
{
	int Data;
	struct Node *pNext;
};
typedef struct Node NODE;

struct List
{
	NODE *pHead;
	NODE *pTail;
};
typedef struct List LIST;

//2. Khoi tao dsach lien kien
void Init(LIST &l)
{
	l.pHead = l.pTail = NULL;
}

//3.Tao node trong dsach
NODE* getNode(int x)//x chinh la du lieu dua vao Data
{
	NODE *p = new NODE;
	if (p == NULL)
	{
		return NULL;
	}
	p->Data = x; //Luu X vao Data
	p->pNext = NULL; //Khoi tao moi lket
	return p;
};

//4. Them node (them dau, them cuoi)
void AddHead(LIST &l,NODE *p)
{
	if(l.pHead == NULL)//Tuc la danh sach rong
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		p->pNext = l.pHead; //p quang day de tham gia vao dsach
		l.pHead=p; //p chinh thuc dung dau dsach
	}
};

void AddTail(LIST &l,NODE *p)
{
	if(l.pHead == NULL)//Tuc la danh sach rong
	{
		l.pHead = l.pTail = p;
	}
	else
	{
		l.pTail->pNext = p;//l.pTail quang day noi voi p
		l.pTail=p;
	}
};

//5. Nhap du lieu cho dasch
void InPut(LIST &l)
{
	int n;
	cin>>n;
	Init(l);//Khoi tao danh sach
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		NODE *p = getNode(x);//Dua Data vao node
		AddTail(l,p);//Them Node p vao cuoi dsach
		//AddHead(l,p);
	}
};

void OutPut(LIST l)
{
	//for(int i=0;i<n;i++)
	for(NODE *p = l.pHead ; p!=NULL ; p=p->pNext)
	{
		cout<<p->Data;
	}
}

int Max(LIST l)
{
	int maxx=l.pHead->Data;
	for(NODE *p = l.pHead ; p!=NULL ; p=p->pNext)
	{
		if(p->Data>maxx)
		{
			maxx = p->Data;
		}
	}
	return maxx;
};

int main()
{
	LIST l;
	InPut(l);
	OutPut(l);
	Max(l);
	int maxx=Max(l);
	cout<<maxx;
	return 0;
}