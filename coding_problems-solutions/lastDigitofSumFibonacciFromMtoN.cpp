#include<bits/stdc++.h>
using namespace std;

long long find_fibonacci_lastdigit(long long n,long long m)
{
	if(n==0 || n==1)
		return n%10;	
	long long a =0,b=1,sum=0;
	long long c,d;
	for(int i=0;i<=n;i++)
	{		
		c = (a+b)%10;
		sum += c;
		if(i==m-1)
			d = sum;
		a =b;
		b =c;

	}

	return (sum-d)%10;
}
int main()
{
	long long n,m;
	cin>>m>>n;
	cout<< find_fibonacci_lastdigit(n,m);
}