#include <iostream>
using namespace std;

int main() 
{
	int n, a=0;
	cin>>n;
	int b[n];
	for(int i=0; i<n; ++i)
	{
		int d=i;
		cin>> b[i];
		while ((b[d-1]>b[d]) && (d!=0))
		{
		int x=b[d-1];
		b[d-1]=b[d]; 
		b[d]=x;
	    --d;
		}
	}
	int c, d, e=n-1,y=0;
	cin >> c >> d;
	while(e-a!=1)
	{
		if(b[(e+a)/2]==c)
		{
			++y;
			break;
		}
		if(b[(e+a)/2]>c)
		{
			e=(e+a)/2;
		}
		else 
		{
			a=(e+a)/2;
		}
	}
		while(e-a!=1)
	{
		if(b[(e+a)/2]==d)
		{
			++y;
			break;
		}
		if(b[(e+a)/2]>d)
		{
			e=(e+a)/2;
		}
		else 
		{
			a=(e+a)/2;
		}
	}
	if(y==2)
	{
		cout<<"есть";
	}else
	{
		cout<<"нет";
	}
	return 0;
}
