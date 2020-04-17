#include <iostream>
using namespace std;
int main()
{
	int a,b,c,x,v,d;
	
	cout<<"a=";
	cin>>a;
	
	
	b=a%10;
	c=(a/10)%10;
	d=a/100;
	v=b+c+d;
	x=b*c*d;
	
	
	cout<<v<<" "<<x;
	
	return 0;
	
	
	
	
	
}
