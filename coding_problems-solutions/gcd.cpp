#include <bits/stdc++.h>
using namespace std;


long long gcd(long long a,long long  b)
{
	swap(a,b);
	if(b==0)
		return a;
	
	return gcd(a%b,b);

}

int main()
{
	long long a,b;
	cin>>a>>b;
	
	cout<<(gcd(a,b));

}