//pair

#include <bits/stdc++.h>
using namespace std;

int main()
{	pair<int, string>p;
	p=make_pair(23,"kgf");
	p={23,"kgf"};
	cout<<p.first<<" "<<p.second<<endl;
	
	p.first=3333;
	pair<int, string>p1=p;
	pair<int, string>&p1=p;
	cout<<p1.first<<endl<<p1.second;
	return 0;
}



