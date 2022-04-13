#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"enter digit : ";
	cin>>n;
	int digit_sum=0;
	while(n)
	{
		digit_sum+=n%10;
		n=n/10;		
	}
	cout<<"\nsum of digits is : "<<digit_sum;
	return 0;
}



