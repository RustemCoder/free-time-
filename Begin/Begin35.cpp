#include <iostream>
using namespace std;

int main()

{
	double u,v,t1,t2,s1,s2;
	
	setlocale(LC_ALL,"Russian");	
	cout<<"������ =\n";

	cin>>u>>v>>t1>>t2;
	
	s1=(u-v)*t2; // ������ �������
	s2=u*t1; //  �  ������� ���� 
	
	cout<<"������ �������="<<s1<<"  � ������� ����= "<< s2;
return 0 ;
	
	
	
	
	
	
	
	
}
