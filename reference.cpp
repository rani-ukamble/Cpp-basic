#include <bits/stdc++.h>
using namespace std;

void increment(int &n1,int n2)//n1 by reference & n2 by value
{
	n1++;
	n2++;
}
int main()
{
	int a=3, b=7;
	cout<<a<<" "<<b<<endl;
	increment(a,b);
	cout<<a<<" "<<b<<endl;
	return 0;
}



