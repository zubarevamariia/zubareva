#include <iostream>
using namespace std;

int main() 
{
	int n;
	cin>>n;
    long long a[n], b[n],c[n];
    long long d=0, r=0;
    for(int i=0;i<n; ++i)
    {
    	cin>>a[i]>>b[i]>>c[i];
    	d+=b[i];
    	r+=c[i];
    	if(a[i]+1>r)
    	{
    		cout<<d-b[i];
    		return 0;
    	}
    } 
    cout<<d;
	return 0;
}
