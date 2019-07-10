#include <iostream>
#include <string.h>
using namespace std;
int main()
{	
	string name;
	cout<<"Hello !"<<endl;
	cout<<"What is your name ?\n";
	cin>>name;
	cout<<"Hello "<<name<<endl;
	if (name == "Hieu")
	{
		cout<<"Ban that dep trai";
		cout<<endl;
	}
	else
	{
		cout<<"Xau nhu TRO,Cut ngay!!!!!!!!"<<endl;
	}
	return 0;
}