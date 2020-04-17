#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	
	int s1,s2,s3,r1,r2;
	double pi =3.14;
	
	
	cout<<"r1=";
    cin>>r1;
    cout<<"r2=";
    cin>>r2;
   s1=pi*pow(r1,2);
   s2=pi*pow(r2,2);
   s3=s1-s2;
   cout<<s1<< "  "<<s2<<"   "<< s3;
	return 0;
	
}
