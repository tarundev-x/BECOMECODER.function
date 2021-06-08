#include<iostream>
using namespace std;
int printOnetoN(int n,int i=1)
{
	if(n==0)
	{
		cout<<"\n";
		return 0;
	}
	cout<<i<<" ";
	return printOnetoN(n-1,i+1);
}
int main()
{
	int n;
	cin>>n;
	cout<<printOnetoN(n);
}
