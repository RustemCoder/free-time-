#include <iostream>
using namespace std;
int main()
{
int  *a  = new int ;
int *b = new int ;
*a = 10;
*b =5 ;
*b = * b +*a ;



cout<<*b ;
return 0;


}