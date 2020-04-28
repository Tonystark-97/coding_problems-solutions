#include<bits/stdc++.h>
using namespace std;

long long find_fibonacci_lastdigit(long long n)
{
	if(n==0 || n==1)
		return n%10;
	long long a =0,b=1,sum=a+b;
	long long c;
	for(int i=2;i<=n;i++)
	{
		c = (a+b)%10;
		//cout<<c;
		sum += c;
		a =b;
		b =c;

	}

	return sum%10;
}
int main()
{
	long long n;
	cin>>n;
	cout<< find_fibonacci_lastdigit(n);
}