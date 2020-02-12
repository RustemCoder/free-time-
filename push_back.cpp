#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
vector <string> v1 ;

string name ;


do
{
getline(cin,name);

if(name.size()>0)
{
    v1.push_back(name);
}
}while(name!="");


unsigned int size = v1.size();


for(int i=0;i<size;i++)
{
    cout<<v1[i]<<endl;
}
return 0 ;

}