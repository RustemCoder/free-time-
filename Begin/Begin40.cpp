#include <iostream>
#include <cmath>
using namespace std;

int main()

{	setlocale(LC_ALL,"Russian");
	double A2,B2,C2,A1,B1,C1,D,x,y;
		cout<<"Данные =\n";
	cin>>A2>>B2>>C2>>A1>>B1>>C1;
	
D=A1*B2-A2*B1;

x=(C1*B2-C2*B1)/D;
y=(A1*C2-C1*A2)/D;

	cout<<x<<"  "<<y;
return 0 ;
	
}
	
	
	
	
	
	
	

