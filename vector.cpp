//vector-dynamic size

#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int>p)
{
	for(int i=0;i<p.size();i++)//O(1)
	{
		cout<<p[i]<<" ";
	}
}
int main()
{
	int a[5];
	vector<int>p;//vector size 0
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		p.push_back(x);//O(1)
	}
	printvec(p);		
	return 0;
}



