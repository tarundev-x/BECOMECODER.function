#include<iostream>
using namespace std;
int printNtoOne(int n)
{
	if(n<=1)
	{
		return 1;
	}
	cout<<n<<" ";
	return printNtoOne(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<printNtoOne(n);
}
