#include <iostream>
#include <vector>
using namespace std;

int find_fibonacci(int n)
{
	vector<int> F(n+1);
	F[0]=0;
	F[1]=1;
	for(int i=2;i<n+2;i++)
		F[i] = F[i-1]+F[i-2];

	return F[n];
}
int main()
{
	int n;
	cin>>n;
	cout<< find_fibonacci(n);
}