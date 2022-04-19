//copy the pair

#include <bits/stdc++.h>
using namespace std;

int main()
{
	pair<int,string>p;
	p={2,"ab"};
	cout<<p.first<<endl<<p.second<<endl;
	
	pair<int,string>&p1=p;
	cout<<p1.first<<endl<<p1.second<<endl;
	
	p1.first=13;
	cout<<p.first<<endl<<p.second<<endl;
	cout<<p1.first<<endl<<p1.second<<endl;
	return 0;
}



