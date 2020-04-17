#include <iostream>
using namespace std;
int main()
{
	int a,b,c,d,v;
	
	cout<<"a=";
	cin>>a;
	
	
	b=a%10;
	c=(a/10)%10;
	d=a/100;
	v=b*100+d*10+c;
	
	
	
	cout<<v;
	
	return 0;
	
	
	
	
	
}
