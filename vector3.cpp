#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int>v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	cout<<endl;
}
int main()
{
	vector<int>v(4);//vector of size 4
	printvec(v);
	v.push_back(8);//vector size can be changed
	v.push_back(9);
	printvec(v);
	v.pop_back();//vector size can be changed
	printvec(v);
	return 0;
}



