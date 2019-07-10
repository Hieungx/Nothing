#include <iostream>
using namespace std;

int main()

{
	int N,x,y;
	cin >>N;

	if (10<= N && N <=99)
	{
		cout<<"00"<<endl;
	}	
	
	 if (100<= N && N <= 999)
	{
		x= N/100;
		cout<<"0"<<x<<endl;
	}
	
	 if (N >=1000)
	{
		x = (N/1000)%100;
		y = (N/100)%10;
		cout<<x<<y<<endl;
	}
		
}
