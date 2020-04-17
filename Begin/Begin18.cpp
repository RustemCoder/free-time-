#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	
	int x1,x2,y1,y2,s,p;
    
    cout<<"x1=";
    cin>>x1;
    cout<<"y1=";
    cin>>y1;
   cout<<"x2=";
   cin>>x2;
    cout<<"y2=";
   cin>>y2;
    
   s=(abs(x2-x1))*(abs(y2-y1));
   p=abs(x2-x1)+abs(y2-y1);
  
 
  
   cout<<s<<"  "<< p;
	return 0;
	
}
