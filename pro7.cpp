//finding prime no.
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nenter number = ";
	cin>>num;
	int i;
	for(i =2;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<"\nnot prime";
			break;
		}
	}
	if(i==num)
	{	
		cout<<"\nprime";
	}
	return 0;
}




