#include <iostream>
using namespace std;
int main()
{
	
	int a,b,c;
	
	
	setlocale(LC_ALL,"Russian");
	cout<<"a=";
	cin>>a;
	
b=a%10;
c=a/10;	

	cout<<c<<"  "<<b;
	
	
	return 0;
}
