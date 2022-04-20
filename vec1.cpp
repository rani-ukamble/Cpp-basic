//vector-dynamic size

#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int>p)
{
	cout<<"size :"<<p.size()<<endl;
	for(int i=0;i<p.size();i++)//O(1)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
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
		printvec(p);
		p.push_back(x);//O(1)
	}
	printvec(p);		
	return 0;
}



