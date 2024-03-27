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
		int j=1;
		int num=n-i+1;
		while(j<=num)
		{
			cout<<j;
			j=j+1;
		}
		int star1=i-1;
		while(star1)
		{
			cout<<"*";
			star1=star1-1;
		}
		int star2=i-1;
		while(star2)
		{
			cout<<"*";
			star2=star2-1;
		}
		int k=1;
		int nums=n-i+1;
		while(k<=nums)
		{
			cout<<nums;
			//k=k+1;
			nums=nums-1;
		}
		cout<<endl;
		i=i+1;
	}
}
