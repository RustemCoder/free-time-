#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	
	int x1,x2,x3,y1,y2,y3,p,a,b,c;
    double s;
    cout<<"x1=";
    cin>>x1;
    cout<<"y1=";
    cin>>y1;
   cout<<"x2=";
   cin>>x2;
    cout<<"y2=";
   cin>>y2;
    cout<<"x3=";
   cin>>x3;
    cout<<"y3=";
   cin>>y3;
   
   
   a=sqrt(abs(pow(x2-x1,2))+abs(pow(y2-y1,2)));
   b=sqrt(abs(pow(x2-x3,2))+abs(pow(y2-y3,2)));
   c=sqrt(abs(pow(x1-x3,2))+abs(pow(y1-y3,2)));
   p=(a+b+c)/2;
   s=sqrt(p*(p-a)*(p-b)*(p-c));
   cout<<a<<"  "<<b<<"   "<<c<<"   "<< s   ;
	return 0;
	
}
