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
		int space=i-1;
		while(space)
		{
			cout<<" ";
			space=space-1;
		}
		int num=n-i+1;
		while(num)
		{
			cout<<i;
			num=num-1;
		}
		cout<<endl;
		i=i+1;
	}
}
