#include <iostream>
using namespace std;

int main() 
{
int n, k;
	cin>>n>>k;
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
	cout<<b[k-1];
	return 0;
}
