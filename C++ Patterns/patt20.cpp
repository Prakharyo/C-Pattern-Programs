#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter number of rows: ";
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int star=n-i+1;  
		while(star)
		{
			cout<<"*";
			star=star-1;
		}
		cout<<endl;
		i=i+1;
	}
}
