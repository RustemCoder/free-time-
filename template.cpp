#include <iostream>
#include <cmath>
using namespace std ;
template <typename T>
void rt(T &a, T &b)
{
a=1;
b=2;
}
int main()
{

int a ,b ;

a=3;
b=4;

rt(a,b);

cout<<a<<" "<<b;
 



return 0;
}