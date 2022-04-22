//function overloading

#include <bits/stdc++.h>
using namespace std;

int sum(int a,int b)
{
	return a+b;
}

int sum(int a,int b,int c)
{
	return a+b+c;
}

int main()
{
	cout<<sum(2,4)<<endl;
	cout<<sum(22,4,3)<<endl;
	return 0;
}



