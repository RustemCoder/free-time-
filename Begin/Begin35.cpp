#include <iostream>
using namespace std;

int main()

{
	double u,v,t1,t2,s1,s2;
	
	setlocale(LC_ALL,"Russian");	
	cout<<"Данные =\n";

	cin>>u>>v>>t1>>t2;
	
	s1=(u-v)*t2; // против течения
	s2=u*t1; //  в  стоячей воде 
	
	cout<<"Против течения="<<s1<<"  В стоячей воде= "<< s2;
return 0 ;
	
	
	
	
	
	
	
	
}
