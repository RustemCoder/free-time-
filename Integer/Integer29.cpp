#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	
	int A,B,C,M,N,v;
	
	cout<<"A=";
	cin>>A;
	cout<<"B=";
	cin>>B;
	cout<<"C=";
	cin>>C;
	
	
	v=pow(C,2);
	
	M=(A*B)%v;
	N=(A*B)/v;
	


	cout<<N<<"   "<<M;
	
	return 0;
	
	
	
	
	
}
