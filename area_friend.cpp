#include <bits/stdc++.h>
using namespace std;

class box
{
	int length;
	int breadth;
	int area;
	public:
	    void set(int l,int b)
		{
		int a;
		length=l; breadth=b; area=a;
		}
	friend int show(box);
};
int show(box b)
{
	return (b.length*b.breadth);
}
int main()
{
	box b;
	b.set(7,2);
    cout<<"Area of box: "<< show(b)<<endl;
	return 0;
}



