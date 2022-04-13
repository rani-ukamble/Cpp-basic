#include <bits/stdc++.h>
using namespace std;

void f1(string s)//by value
{
	s="hi";
}

void f2(string &s)//by reference
{
	s="hello";
}

int main()
{
	string s="asasch";
	cout<<s<<endl;
	f1(s);
	cout<<s<<endl;
	f2(s);
	cout<<s<<endl;
	return 0;
}



