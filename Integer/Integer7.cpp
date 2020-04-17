#include <iostream>
using namespace std;
int main()
{
	
	int a,b,c,x,n;
	
	
	setlocale(LC_ALL,"Russian");
	cout<<"a=";
	cin>>a;

	
b=a%10;
c=a/10;
x=b+c;
n=b*c;	

	cout<<x<<" Cумма чисел\n"<<n<<" произведение";
	
	
	return 0;
}
