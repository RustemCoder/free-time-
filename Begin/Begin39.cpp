#include <iostream>
#include <cmath>
using namespace std;

int main()

{	setlocale(LC_ALL,"Russian");
	double A,B,C,D,x1,x2;
		cout<<"Данные =\n";
	cin>>A>>B>>C;
	
D=B*B-4*A*C;

x1=(-B+sqrt(D))/2*A;
x2=(-B-sqrt(D))/2*A;

	cout<<x1<<"  "<<x2;
return 0 ;
	
}
	
	
	
	
	
	
	

