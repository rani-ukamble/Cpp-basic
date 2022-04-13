#include <bits/stdc++.h>
using namespace std;

int dsum(int n)
{
	int digit_sum=0;
	while(n)
	{
		digit_sum+=n%10;
		n=n/10;		
	}
	return digit_sum;
}

int main()
{	int a;
	cout<<"enter digit : ";
	cin>>a;
	cout<<"\nsum of digits is : "<<dsum(a);
	
	return 0;
}



