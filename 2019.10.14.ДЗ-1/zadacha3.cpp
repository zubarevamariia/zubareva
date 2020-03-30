#include <iostream>
using namespace std;
int Feb(int n)
{	
	if ((n==1)||(n==2))
	{
		return 1;
	}
	if(n%2==0)
	{
		n/=2;
		return Feb(n+1)*Feb(n+1)-Feb(n-1)*Feb(n-1);
	}else
	{
		n/=2;
		return Feb(n)*Feb(n)+Feb(n+1)*Feb(n+1);
	}
	
}
int main()
{
	int n;
	cin>>n;
	cout<<Feb(n);
	
	return 0;
}
