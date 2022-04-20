//pass vectors by references

#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int>&v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i];
	}
	cout<<endl;
}

int main()
{
	vector<int>v;
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(9);
	printvec(v);
	
	//vector<int>v1=v;//v1 is not copy of v 
	
	vector<int>&v1=v;//v1 is copy of v --- O(n) by reference
	printvec(v1);
    
    v.push_back(7);
    printvec(v);
    printvec(v1);
	return 0;
}



