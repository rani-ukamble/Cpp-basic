//VECTOR OF PAIR 

#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int,int>>&v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i].first<<" "<<v[i].second;
	}
	cout<<endl;
}
int main()
{
	vector<pair<int,int>>v={{1,2},{2,3},{3,4}};
	printvec(v);
	
	return 0;
}



