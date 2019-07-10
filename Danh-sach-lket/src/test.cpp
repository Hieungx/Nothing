#include <iostream>
using namespace std;
struct DaThuc
{
	int n;
	float *HeSo;
};

void NhapDaThuc(DaThuc *x)
{
	do{
		cout<<"Nhap vao so bac cua da thuc: ";
		cin>>x->n;
		if (x->n<1)
		{
			cout<<"So bac cua da thuc phai >=1. Xin kiem tra lai\n";	
		}
	}while(x->n <1);
	x->HeSo=new float [x->n+1];
	for(int i=0;i<=x->n;i++)
	{
		cout<<"Nhap vao he so thu "<< i << " la: ";
		cin>>x->HeSo[i];
	}
}
void XuatDaThuc(DaThuc *x)
{
	for(int i=0;i<x->n;i++)
	{
		cout<<x->HeSo[i]<<"* x^"<<i<<" + ";
	}
	cout<< x->HeSo[x->n]<<" *x^ "<< x->n;
}
int main(int argc, char const *argv[])
{
	DaThuc *x = new DaThuc;
	NhapDaThuc(x);
	XuatDaThuc(x);
	cout<<endl;
	delete x;
	return 0;
}