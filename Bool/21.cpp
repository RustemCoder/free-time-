#include <iostream>
using namespace std;
int main()
{
	int A;
	cin>>A;
	
	int hundred,ten,one;
	hundred = (A/100)%10;
	ten = (A/10)%10;
	one = A%10;
	
	
	if(one>ten and ten>hundred){
		cout<<true;
		
	}
	else
	{
		cout<<false;
	}
	
return 0 ;	
}
