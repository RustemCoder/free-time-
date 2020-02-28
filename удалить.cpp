#include <iostream>
#include <cstdlib>
using namespace std;


void FillArray(  int  *Arr,const int size)
{
	for(int i=0;i<size;i++)
	{
		Arr[i]=rand()%10;
	}
}
void push_back(int *& Arr,int &size, const int value)
{
	int * Array = new int [size+1];
	
	for(int i=0;i<size;i++)
	{
		
		Array[i]=Arr[i];
	}
	Array[size]= value;
	size++;
	delete[] Arr ;
	
	Arr = Array ;
}
void pop_back(int *&Arr, int &size)
{
	size--;
	int *Array = new int[size];
	for(int i=0;i<size;i++)
	{
		Array[i]=Arr[i];
	}
	
	delete[] Arr ;
	
	Arr = Array ;
}
int main()
{
	int size=5 ;
	
 int *firstarray = new int [size ];
 int *SecondArray= new int [size];
	FillArray(firstarray,size);
	FillArray(SecondArray,size);
	
	delete[] firstarray ;
	firstarray = new int [size];
	
	for(int i=0 ;i<size;i++)
{
	firstarray[i]=SecondArray[i];
	cout<<firstarray[i]<<"\t";
	}	
	int value =100 ;
	push_back(firstarray,size,value);
	
	for(int i=0;i<size;i++)
	{
		cout<<firstarray[i]<<"\t";
	}
	cout<<"\n";
	pop_back(firstarray,size);
	for(int i=0;i<size;i++)
	{
		cout<<firstarray[i]<<"\t";
	}
	delete[]firstarray ;
	return 0;
}